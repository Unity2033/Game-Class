#include <iostream>

using namespace std;

template <typename T>
class Tree
{
private:
	struct Node
	{
		T data;

		Node* left;
		Node* right;
	};

	Node* root;
public:
	Tree()
	{
		root = nullptr;
	}

	bool Find(T data)
	{
		Node* currentNode = root;

		if (currentNode == nullptr)
		{
			return false;
		}
		else
		{
			while (currentNode != nullptr)
			{
				if (currentNode->data == data)
				{
					return true;
				}
				else
				{
					if (currentNode->data > data)
					{
						currentNode = currentNode->left;
					}
					else
					{
						currentNode = currentNode->right;
					}
				}
			}

			return false;
		}
	}

	void insert(T data)
	{
		if (root == nullptr)
		{
			root = CreateNode(data);
		}
		else
		{
			Node* currentNode = root;

			while (currentNode != nullptr)
			{
				if (currentNode->data == data)
				{
					return;
				}
				else if (currentNode->data > data)
				{
					if (currentNode->left == nullptr)
					{
						currentNode->left = CreateNode(data);
						break;
					}
					else
					{
						currentNode = currentNode->left;
					}
				}
				else
				{
					if (currentNode->right == nullptr)
					{
						currentNode->right = CreateNode(data);

						break;
					}
					else
					{
						currentNode = currentNode->right;
					}
				}
			}

		}

	}

	void erase(T data)
	{
		if (root == nullptr)
		{
			cout << "Binary Search Tree is Empty" << endl;
		}
		else
		{
			Node* currentNode = root;
			Node* parentNode = nullptr;

			while (currentNode != nullptr && currentNode->data != data)
			{
				if (currentNode->data > data)
				{
					parentNode = currentNode;
					currentNode = currentNode->left;
				}
				else
				{
					parentNode = currentNode;
					currentNode = currentNode->right;
				}
			}

			if (currentNode == nullptr)
			{
				cout << "Data Not found in the Binary Search Tree" << endl;
			}
			else if (currentNode->left == nullptr && currentNode->right == nullptr)
			{
				if (parentNode != nullptr)
				{
					if (parentNode->left == currentNode)
					{
						parentNode->left = nullptr;
					}
					else
					{
						parentNode->right = nullptr;
					}
				}
				else
				{
					root = nullptr;
				}
			}
			else if (currentNode->left == nullptr || currentNode->right == nullptr)
			{
				Node* childNode = nullptr;

				if (currentNode->left != nullptr)
				{
					childNode = currentNode->left;
				}
				else
				{
					childNode = currentNode->right;
				}

				if (parentNode != nullptr)
				{
					if (parentNode->left == currentNode)
					{
						parentNode->left = childNode;
					}
					else
					{
						parentNode->right = childNode;
					}
				}
			}
			else
			{
				Node* childNode = currentNode->right;
				Node* traceNode = childNode;

				while (childNode->left != nullptr)
				{
					traceNode = childNode;
					childNode = childNode->left;
				}

				currentNode->data = childNode->data;

				traceNode->left = childNode->right;

				delete childNode;

				return;
			}

			delete currentNode;

		}
	}

	void Inorder(Node* root)
	{
		if (root != nullptr)
		{
			Inorder(root->left);
			cout << root->data << " ";
			Inorder(root->right);
		}
	}

	void Destroy(Node* root)
	{
		if (root != nullptr)
		{
			Destroy(root->left);

			Destroy(root->right);

			delete root;
		}
	}

	Node* begin()
	{
		return root;
	}

	Node* CreateNode(T data)
	{
		Node* newNode = new Node;

		newNode->data = data;

		newNode->left = nullptr;

		newNode->right = nullptr;

		return newNode;
	}

	~Tree()
	{
		Destroy(root);
	}
};


int main()
{
	Tree<int> tree;

	tree.insert(15);
	tree.insert(20);
	tree.insert(10);
	tree.insert(13);
	tree.insert(11);
	tree.insert(12);
	tree.insert(9);

	tree.erase(10);

	cout << tree.Find(15) << endl;

	tree.Inorder(tree.begin());

	return 0;
}