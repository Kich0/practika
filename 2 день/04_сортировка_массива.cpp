#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int numbers[] = {3, 7, 1, 9, 4, 6, 2, 8, 5, 10};
    const int size = 10;

    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}
