#include <iostream>

#define SIZE 10

using namespace std;

template <typename T>
class AdjacencyList
{
private:
    struct Node
    {
        T data;
        Node* next;

        Node(T data, Node* link = nullptr)
        {
            this->data = data;
            next = link;
        }
    };

    int size; // 정점의 개수
    T vertex[SIZE]; // 정점의 집합
    Node* list[SIZE]; // 인접 리스트

public:
    AdjacencyList()
    {
        size = 0;

        for (int i = 0; i < SIZE; i++)
        {
            list[i] = NULL;
            vertex[i] = NULL;
        }
    }

    void push(T data)
    {
        if (size >= SIZE)
        {
            cout << "Adjacency List Overflow" << endl;
        }
        else
        {
            vertex[size++] = data;
        }
    }

    void edge(int i, int j)
    {
        if (size <= 0)
        {
            cout << "Adjacency List is Empty" << endl;
        }
        else if (i >= size || j >= size)
        {
            cout << "Index Out of Range" << endl;
        }
        else
        {
            list[i] = new Node(vertex[j], list[i]);
            list[j] = new Node(vertex[i], list[j]);
        }
    }

    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << vertex[i] << " : ";

            Node* currentNode = list[i];

            while (currentNode != nullptr)
            {
                cout << currentNode->data << " ";

                currentNode = currentNode->next;
            }

            cout << endl;
        }
    }


    ~AdjacencyList()
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (list[i] != nullptr)
            {
                delete[] list[i];
            }
        }
    }

};


int main()
{
    AdjacencyList<char> adjacencyList;

    adjacencyList.push('A');
    adjacencyList.push('B');
    adjacencyList.push('C');
    adjacencyList.push('D');

    adjacencyList.edge(0, 1);
    adjacencyList.edge(0, 2);
    adjacencyList.edge(1, 2);
    adjacencyList.edge(2, 3);

    adjacencyList.show();

    return 0;
}
