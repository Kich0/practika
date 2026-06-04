#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

void inputArray(int arr[], int n)
{
    cout << "Введите " << n << " элементов: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    cout << "Массив: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int sumArray(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int N = 5;
    int arr[N];
    inputArray(arr, N);
    printArray(arr, N);
    cout << "Сумма = " << sumArray(arr, N) << endl;

    return 0;
}
