#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    double firstNumber, secondNumber;
    char operation;
    cout << "Введите выражение: ";
    cin >> firstNumber >> operation >> secondNumber;

    if (operation == '+')
        cout << firstNumber + secondNumber << endl;
    else if (operation == '-')
        cout << firstNumber - secondNumber << endl;
    else if (operation == '*')
        cout << firstNumber * secondNumber << endl;
    else if (operation == '/' && secondNumber != 0)
        cout << firstNumber / secondNumber << endl;
    else
        cout << "Ошибка" << endl;

    return 0;
}
