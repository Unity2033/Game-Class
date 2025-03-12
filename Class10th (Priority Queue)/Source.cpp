#include <iostream>

using namespace std;

template <typename T>
class PriorityQueue
{
private:
    int index;
    int capacity;

    T  * container;
public:
    PriorityQueue()
    {
        index = 0;
        capacity = 0;

        container = nullptr;
    }

    void push(T data)
    {
        if (capacity <= 0)
        {
            resize(1);
        }
        else if (index >= capacity)
        {
            resize(capacity * 2);
        }

        container[index++] = data;

        int child = index - 1;
        int parent = (child - 1) / 2;

        while (child > 0)
        {
            if (container[parent] < container[child])
            {
                std::swap(container[parent], container[child]);
            }

            child = parent;
            parent = (child - 1) / 2;
        }  
    }

    void resize(int newSize)
    {
        // 1. capacity에 새로운 size 값을 저장합니다.
        capacity = newSize;

        // 2. 새로운 포인터 변수를 생성해서 새롭게 만들어진
        //    메모리 공간을 가리키도록 합니다.
        T * newContainer = new T[capacity];

        // 3. 새로운 메모리 공간의 값을 초기화합니다.
        for (int i = 0; i < capacity; i++)
        {
            newContainer[i] = NULL;
        }

        // 4. 기존 배열에 있는 값을 복사해서 새로운 배열에
        //    넣어줍니다.
        for (int i = 0; i < index; i++)
        {
            newContainer[i] = container[i];
        }

        // 5. 기존 배열의 메모리를 해제합니다.
        if (container != nullptr)
        {
            delete[] container;
        }

        // 6. 기존에 배열을 가리키던 포인터 변수의 값을
        //    새로운 배열의 시작 주소로 가리킵니다.
        container = newContainer;

    }

    void pop()
    {
        if (index <= 0)
        {
            cout << "Priority Queue is Empty" << endl;
        }
        else
        {
            container[0] = container[--index];

            int parent = 0;

            while (parent * 2 + 1 < index)
            {
                int child = parent * 2 + 1;

                if (container[child] < container[child + 1])
                {
                    child++;
                }

                if (container[child] < container[parent])
                {
                    break;
                }
                else
                {
                    std::swap(container[parent], container[child]);

                    parent = child;
                }
            }
        }
    }

    const T & top()
    {
        return container[0];
    }

    const bool & empty()
    {
        if (index <= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    const int& size()
    {
        return index;
    }

    ~PriorityQueue()
    {
        if (container != nullptr)
        {
            delete [ ] container;
        }
    }
};

int main()
{
    PriorityQueue<int> priorityQueue;

    // 8개의 요소를 추가해서 배열 크기가 16으로 늘어나게 함
    priorityQueue.push(5);
    priorityQueue.push(17);
    priorityQueue.push(3);
    priorityQueue.push(1);
    priorityQueue.push(92);
    priorityQueue.push(70);
    priorityQueue.push(62);
    priorityQueue.push(9);
    priorityQueue.push(8);
    priorityQueue.push(110);
    priorityQueue.push(150);
    priorityQueue.push(1990);


    cout << "Priority Queue Size: " << priorityQueue.size() << endl;

    // pop을 반복해서 호출하여 크기가 큰 배열에서 pop 동작 확인
    while (!priorityQueue.empty())
    {
        cout << "Top: " << priorityQueue.top() << endl;
        priorityQueue.pop();
    }

    return 0;
}
