#include <iostream>
using namespace std;

void fullarray(int** arr, int a, int b)
{
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 100;
        }

    }
}

void printarray(int** arr, int a, int b)
{
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < b; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 0, b = 0;
    cout << "Введите количество строк: ";
    cin >> a;
    cout << "Введите количество столбцов: ";
    cin >> b;
    int** arr = new int* [a];
    for (size_t i = 0; i < a; i++)
    {
        arr[i] = new int[b];
    }
    fullarray(arr, a, b);
    printarray(arr, a , b);
    delete(arr);
    return 0;
}