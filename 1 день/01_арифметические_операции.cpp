#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int firstNumber, secondNumber;
    cout << "Введите два числа: ";
    cin >> firstNumber >> secondNumber;

    cout << "Сумма = " << firstNumber + secondNumber << endl;
    cout << "Разность = " << firstNumber - secondNumber << endl;
    cout << "Произведение = " << firstNumber * secondNumber << endl;
    cout << "Деление = " << firstNumber / secondNumber << endl;
    cout << "Остаток = " << firstNumber % secondNumber << endl;

    return 0;
}
