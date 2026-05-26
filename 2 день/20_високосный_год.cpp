#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int year;
    cout << "Введите год: ";
    cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeap)
        cout << year << " - високосный год" << endl;
    else
        cout << year << " - не високосный год" << endl;

    return 0;
}
