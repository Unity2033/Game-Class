#include <iostream>

using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
    struct Node
    {
        T data;
        Node * next;
        Node * previous;
    };

    Node* head;
    Node* tail;

    int size;
public:
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

};

int main()
{


    return 0;
}
