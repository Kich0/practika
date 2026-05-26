#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int size = 7;
    int numbers[size] = {4, 7, 2, 9, 6, 3, 8};
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Четных чисел = " << evenCount << endl;
    cout << "Нечетных чисел = " << oddCount << endl;
    cout << "Обратный порядок: ";
    for (int i = size - 1; i >= 0; i--)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}
