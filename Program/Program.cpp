#include <iostream>

using namespace std;

class String
{
private:
    int size;
    char * pointer;

public:
    String()
    {
        size = 0;
        pointer = nullptr;
    }

    void operator = (const char * word)
    {
        size = strlen(word) + 1;

        if (pointer == nullptr)
        {
            pointer = new char[size];

            for (int i = 0; i < size; i++)
            {
                pointer[i] = word[i];
            }
        }
        else
        {
            char* newPointer = new char[size];

            for (int i = 0; i < size; i++)
            {
                newPointer[i] = word[i];
            }

            delete [ ] pointer;

            pointer = newPointer;
        }
    }

    void Append(const char * word)
    {
        int resize = size;

        size = size + strlen(word) + 1;

        char * newPointer = new char[size];

        for (int i = 0; i < resize; i++)
        {
            newPointer[i] = pointer[i];
        }

        for (int i = 0; i < strlen(word) + 1; i++)
        {
            newPointer[resize + i] = word[i];
        }

         delete[] pointer;
        
        pointer = newPointer;
    }

    const int& Size()
    {
        return size - 1;
    }

    const char& operator [] (const int& index)
    {
        return pointer[index];
    }

    ~String()
    {
        if (pointer != nullptr)
        {
            delete [ ] pointer;
        }
    }
};

int main()
{
     // String string;
     // 
     // string = "key";
     // 
     // for (int i = 0; i < string.Size(); i++)
     // {
     //     cout << string[i];
     // }
     // 
     // cout << endl;
     // 
     // string = "apple";
     // 
     // for (int i = 0; i < string.Size(); i++)
     // {
     //     cout << string[i];
     // }
     // 
     // cout << endl;
     // 
     // string.Append(" Four");
     // string.Append(" x");
     // 
     // for (int i = 0; i < string.Size(); i++)
     // {
     //     cout << string[i];
     // }

     return 0;
}
