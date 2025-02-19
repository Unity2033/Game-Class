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
    Node * head;

public:
    CircleLinkedList()
    {
        size = 0;
        head = nullptr;
    }

    void push_back(T data)
    {
        Node * newNode = new Node;

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

};

int main()
{

    return 0;
}
