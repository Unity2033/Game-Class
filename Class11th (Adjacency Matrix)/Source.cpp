﻿#include <iostream>

#define SIZE 10

using namespace std;

template<typename T>
class AdjacencyMatrix
{
private:
    int size; // 정점의 개수
    T vertex[SIZE]; // 정점의 집합
    int matrix[SIZE][SIZE]; // 인접 행렬

public:
    AdjacencyMatrix()
    {
        size = 0;

        for (int i = 0; i < SIZE; i++)
        {
            vertex[i] = NULL;

            for (int j = 0; j < SIZE; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    void push(T data)
    {
        if (size >= SIZE)
        {
            cout << "Adjacency Matrix Overflow" << endl;
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
            cout << "Ajancency Matrix is Empty" << endl;
        }
        else if (i >= size || j >= size)
        {
            cout << "Index Out of Range" << endl;
        }
        else
        {
            matrix[i][j] = 1;
            matrix[j][i] = 1;
        }
    }

    void show()
    {
        if (size >= 0)
        {
            cout << "  ";

            for (int i = 0; i < size; i++)
            {
                cout << vertex[i] << " ";
            }

            cout << endl;

            for (int i = 0; i < size; i++)
            {
                cout << vertex[i] << " ";

                for (int j = 0; j < size; j++)
                {
                    cout << matrix[i][j] << " ";
                }

                cout << endl;
            }
        }
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

    return 0;
}
