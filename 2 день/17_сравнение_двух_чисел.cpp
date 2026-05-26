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

    if (firstNumber > secondNumber)
        cout << firstNumber << " больше " << secondNumber << endl;
    else if (firstNumber < secondNumber)
        cout << secondNumber << " больше " << firstNumber << endl;
    else
        cout << "Числа равны" << endl;

    return 0;
}
