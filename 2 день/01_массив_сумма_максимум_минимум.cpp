#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int numbers[10] = {3, 7, 1, 9, 4, 6, 2, 8, 5, 10};

    cout << "Массив: ";
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << " ";
    cout << endl;

    int sum = 0;
    int maximum = numbers[0];
    int minimum = numbers[0];

    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
        if (numbers[i] > maximum)
            maximum = numbers[i];
        if (numbers[i] < minimum)
            minimum = numbers[i];
    }

    cout << "Сумма = " << sum << endl;
    cout << "Максимум = " << maximum << endl;
    cout << "Минимум = " << minimum << endl;

    return 0;
}
