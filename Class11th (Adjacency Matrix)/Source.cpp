#include <iostream>

using namespace std;

template<typename T>
class AdjacencyMatrix
{
private:
    int size; // 정점의 개수
    int matrixSize; // 인접 행렬의 개수
    int capacity; // 인접 행렬의 메모리
    T * vertex; // 정점의 집합
    int ** matrix; // 인접 행렬

public:
    AdjacencyMatrix()
    {
        size = 0;
        capacity = 0;
        matrixSize = 0;
        vertex = nullptr;
        matrix = nullptr;
    }

    void push(T data)
    {
        if (capacity <= 0)
        {
            resize(1);
        }
        else if (size >= capacity)
        {
            resize(capacity * 2);
        }

        vertex[size++] = data;  
    }

    void edge(int i, int j)
    {
        if (size <= 0)
        {
            cout << "Ajancency Matrix is Empty" << endl;
        }
        else if (i >= size || j >= size)
        {
            cout << "Index Out of Range" << endl;
        }
        else
        {
            if (matrix == nullptr)
            {
                create();
            }
            else if (matrixSize < size)
            {
                matrix_resize();
            }

            matrix[i][j] = 1;
            matrix[j][i] = 1;
        }
    }
    
    void matrix_resize()
    {
        int** newMatrix = new int* [size];

        for (int i = 0; i < size; i++)
        {
            newMatrix[i] = new int[size] {0};
        }

        for (int i = 0; i < matrixSize; i++)
        {
            for (int j = 0; j < matrixSize; j++)
            {
                newMatrix[i][j] = matrix[i][j];
            }
        }

        // 기존 행렬 해제
        if (matrix != nullptr)
        {
            for (int i = 0; i < matrixSize; i++)
            {
                delete [ ] matrix[i];
            }

            delete [ ] matrix;
        }

        // 새 행렬을 가리키도록 포인터 변경
        matrix = newMatrix;

        matrixSize = size;
    }


    void resize(int newSize)
    {
        capacity = newSize;

        T * newMemory = new T[capacity];

        for (int i = 0; i < capacity; i++)
        {
            newMemory[i] = NULL;
        }

        for (int i = 0; i < size; i++)
        {
            newMemory[i] = vertex[i];
        }

        if (vertex != nullptr)
        {
            delete [] vertex;
        }

        vertex = newMemory;
    }

    void create()
    {
        int row = size;
        int column = size;

        matrixSize = size;

        matrix = new int * [size];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[column];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                matrix[i][j] = NULL;
            }
        }
    }

    void show()
    {
        if (matrixSize >= 0)
        {
            for (int i = 0; i < matrixSize; i++)
            {
                for (int j = 0; j < matrixSize; j++)
                {
                    cout << matrix[i][j] << " ";
                }

                cout << endl;
            }
        }
    }

    ~AdjacencyMatrix()
    {
        // 행렬 메모리 해제
        if (matrix != nullptr)
        {
            for (int i = 0; i < matrixSize; i++)
            {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        // 정점 배열 메모리 해제
        delete[] vertex;
    }
};

int main()
{
    AdjacencyMatrix<char> adjacencyMatrix;

    adjacencyMatrix.push('A');
    adjacencyMatrix.push('B');
    adjacencyMatrix.push('C');

    adjacencyMatrix.edge(0, 1);
    adjacencyMatrix.edge(1, 2);

    adjacencyMatrix.show();

    adjacencyMatrix.push('D');

    adjacencyMatrix.edge(2, 3);

    adjacencyMatrix.show();

    return 0;
}
