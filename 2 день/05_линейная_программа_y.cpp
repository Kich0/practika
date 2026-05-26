#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    double firstValue, secondValue, divisor;
    cout << "Введите a, b и c: ";
    cin >> firstValue >> secondValue >> divisor;

    cout << "y = " << (firstValue + secondValue) / divisor << endl;

    return 0;
}
