#include "foo.h"
using namespace std;

void fullarray(int** a, int strock, int stolb)
{
    for (int i = 0; i < strock; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
            a[i][j] = rand() % 100;
        }

    }
}

void printarray(int** a, int strock, int stolb)
{
    for (int i = 0; i < strock; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void printarr(int* arr, int size)
{
    cout << "Скопированный массив" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

void switch1(int* a, int** arr, int strock, int stolb)
{
    int x, y = stolb;
    int n = 0;
    for (int i = 0; i < stolb + 1 ; i++)
    {
        x = 0;
        y = y - i;
        for (; y < stolb; y++)
        {
            a[n] = arr[x][y];
            x++;
            n++;
        }
    }   
    
    for (int i = strock - 1; i > 0; i--)
    {
        y = 0;
        x = x - i;
        for (; x < stolb; x++)
        {
            a[n] = arr[x][y];
            y++;
            n++;
        }
    }
}

void switch2(int* a, int** arr, int strock, int stolb)
{
    int x = 0, n = 0;

    for (int y = 0; y < stolb; y++)
    {
        x = 0;

        for (int i = y; i >= 0; i--)
        {
            a[n] = arr[x][i];
            n++;
            x++;
        }
    }

    int y = 0;
    for (int x = 1; x < strock; x++)
    {
        y = stolb - 1;
        
        for (int i = x; i < strock; i++)
        {
            a[n] = arr[i][y];
            n++;
            y--;
        }
    }
}

void switch3(int* a, int** arr, int stock, int stolb)
{
    int size = stock * stolb;
    int check = 0, n = 0, x = 0, y = 0, count = 0, pov = 0, i = 0;

    while (check == 0)
    {
        x = pov;
        y = pov;
        while (y < stolb)
        {
            a[n] = arr[x][y];
            y++;
            n++;
            if (n >= size)
            {
                return;
            }

            if (pov > 0)
            {
                if (y == stolb - pov)
                {
                    y = 100000;
                }
            }
        }

        if (i == 0)
        {
            i++;
        }

        x = pov + i;
        y = stolb - pov - 1;

        while (x < stock)
        {
            a[n] = arr[x][y];
            x++;
            n++;
            if (n >= size)
            {
                return;
            }

            if (pov > 0)
            {
                if (x == stolb - pov)
                {
                    x = 100000;
                }
            }
        }

        x = stock - pov - 1;
        y = stolb - pov - i - 1;
        count = 0;

        while (y >= 0)
        {
            a[n] = arr[x][y];
            n++;
            y--;
            count++;
            if (n >= size)
            {
                return;
            }

            if (pov > 0)
            {
                if (count == stolb - 2 * pov - 1)
                {
                    y = -1;
                }
            }
        }

        x = stock - pov - i - 1;
        y = pov;
        count = 0;

        while (x > 0)
        {
            a[n] = arr[x][y];
            n++;
            x--;
            count++;
            if (n >= size)
            {
                return;
            }

            if (pov > 0)
            {
                if (count == stolb - 2 * pov - 2)
                {
                    x = -10;
                }
            }
        }
        pov++;
    }
}

void printram()
{
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex);
    GlobalMemoryStatusEx(&statex);
    cout << "Общее количество оперативной памяти = " << (float)statex.ullTotalPhys / (1024 * 1024 * 1024) << endl;
    cout << "Общее количество свободной оперативной памяти = " << (float)statex.ullTotalVirtual / (1024 * 1024 * 1024) << endl;
}

void reverse(int *a, int size)
{
    int c;
    for (int i = 0; i < size / 2; i++)
    {
        c = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = c;
    }
}