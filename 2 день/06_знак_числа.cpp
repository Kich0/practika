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

    if (number > 0)
        cout << "Положительное число" << endl;
    else if (number < 0)
        cout << "Отрицательное число" << endl;
    else
        cout << "Ноль" << endl;

    return 0;
}
