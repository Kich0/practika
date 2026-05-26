#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "Четное число" << endl;
    else
        cout << "Нечетное число" << endl;

    if (number % 5 == 0)
        cout << "Делится на 5" << endl;
    else
        cout << "Не делится на 5" << endl;

    return 0;
}
