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

};

int main()
{


    return 0;
}
