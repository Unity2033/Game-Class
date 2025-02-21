#include <iostream>

using namespace std;

template <typename T>
class CircleLinkedList
{
private:
    struct Node
    {
        T data;
        Node* next;
    };

    int size;
    Node* head;

public:
    CircleLinkedList()
    {
        size = 0;
        head = nullptr;
    }

    void push_back(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;

        if (head == nullptr)
        {
            head = newNode;

            newNode->next = head;
        }
        else
        {
            newNode->next = head->next;

            head->next = newNode;

            head = newNode;
        }

        size++;
    }

    void pop_back()
    {
        if (head == nullptr)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            Node* deleteNode = head;
            Node* currentNode = head;

            if (head == head->next)
            {
                head = nullptr;
            }
            else
            {
                for (int i = 0; i < size - 1; i++)
                {
                    currentNode = currentNode->next;
                }

                currentNode->next = head->next;

                head = currentNode;
            }

            delete deleteNode;

            size--;
        }
    }

    void push_front(T data)
    {
        Node* newNode = new Node;

        newNode->data = data;

        if (head == nullptr)
        {
            head = newNode;

            newNode->next = head;
        }
        else
        {
            newNode->next = head->next;

            head->next = newNode;
        }

        size++;
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            cout << "Linked List is Empty" << endl;
        }
        else
        {
            Node* deleteNode = head->next;

            if (head == head->next)
            {
                head = nullptr;
            }
            else
            {
                head->next = deleteNode->next;
            }

            delete deleteNode;

            size--;
        }
    }

    void show()
    {
        if (head != nullptr)
        {
            Node* currentNode = head->next;

            for (int i = 0; i < size; i++)
            {
                cout << currentNode->data << " ";

                currentNode = currentNode->next;
            }
        }
    }

    const int& Size()
    {
        return size;
    }

    ~CircleLinkedList()
    {
        while (head != nullptr)
        {
            pop_front();
        }
    }
};

int main()
{
    CircleLinkedList<int> circleLinkedList;

    circleLinkedList.push_back(10);
    circleLinkedList.push_back(20);
    circleLinkedList.push_back(30);

    circleLinkedList.push_front(5);
    circleLinkedList.push_front(1);

    circleLinkedList.pop_back();

    circleLinkedList.show();

    return 0;
}
