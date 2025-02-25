#include <iostream>

using namespace std;

template<typename T>
class Vector
{
private:
    int size;
    int capacity;

    T * container;
public:
    Vector()
    {
        size = 0;
        capacity = 0;
        container = nullptr;
    }
};

int main()
{


    return 0;
}
