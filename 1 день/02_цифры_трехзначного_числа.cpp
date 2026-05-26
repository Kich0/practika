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
    cout << "Введите трехзначное число: ";
    cin >> number;

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    cout << "Сумма цифр = " << hundreds + tens + ones << endl;
    cout << "Произведение цифр = " << hundreds * tens * ones << endl;
    cout << "Обратное число = " << ones * 100 + tens * 10 + hundreds << endl;

    return 0;
}
