#include "foo.h"
using namespace std;

void fullarray(int** a, int strock)
{
    for (size_t i = 0; i < 200; i++)
    {
        for (size_t j = 0; j < 200; j++)
        {
            a[i][j] = rand() % 100;
        }

    }
}

void printarray(int** a)
{
    for (size_t i = 0; i < 200; i++)
    {
        for (size_t j = 0; j < 200; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void printarr(int* arr, int size)
{
    cout << "Скопированный массив" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

void switch1(int* a, int** arr)
{
    for (size_t i = 0; i < 200; i++)
    {
        a[i] = arr[i][i];
    }
    cout << endl;
}

void switch2(int* a, int** arr)
{
    int j = 199;
    int z = 0;
    for (size_t i = 0; i < 200; i++)
    {
        a[z] = arr[i][j];
        j--;
        z++;
    }
    cout << endl;
}

void switch3(int* a, int** arr)
{
    int j = 0;
    for (size_t i = 100; i > 0; i--)
    {
        a[j] = arr[i][i];
        j++;
    }
    cout << endl;
}

void switch4(int* a, int** arr)
{
    int j = 0;
    for (size_t i = 100; i < 200; i++)
    {
        a[j] = arr[i][i];
        j++;
    }
    cout << endl;
}

void printram()
{
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex);
    GlobalMemoryStatusEx(&statex);
    cout << "Общее количество оперативной памяти = " << (float)statex.ullTotalPhys / (1024 * 1024 * 1024) << endl;
    cout << "Общее количество свободной оперативной памяти = " << (float)statex.ullTotalVirtual / (1024 * 1024 * 1024) << endl;
}