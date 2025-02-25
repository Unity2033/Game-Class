#include <iostream>

#define SIZE 4

using namespace std;

template <typename T>
class CircleQueue
{
private:
    int rear;
    int front;

    T container[SIZE];
public:
    CircleQueue()
    {
        rear = SIZE - 1;
        front = SIZE - 1;

        for (int i = 0; i < SIZE; i++)
        {
            container[i] = NULL;
        }
    }

    void push(T data)
    {
        if (front == (rear + 1) % SIZE)
        {
            cout << "Circle Queue Overflow" << endl;
        }
        else
        {
            rear = (rear + 1) % SIZE;

            container[rear] = data;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "Circle Queue is Empty" << endl;
        }
        else
        {
            front = (front + 1) % SIZE;

            container[front] = NULL;
        }

    }

    bool empty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    const T& Front()
    {
        return container[(front + 1) % SIZE];
    }

};

int main()
{
    CircleQueue<int> circleQueue;

    circleQueue.push(10);
    circleQueue.push(20);
    circleQueue.push(30);

    while (circleQueue.empty() == false)
    {
        cout << circleQueue.Front() << endl;

        circleQueue.pop();
    }

    circleQueue.push(40);
    circleQueue.push(50);
    circleQueue.push(60);

    return 0;
}
