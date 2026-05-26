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

    bool isPrime = number > 1;
    for (int i = 2; i < number && isPrime; i++)
        if (number % i == 0)
            isPrime = false;

    if (isPrime)
        cout << number << " - простое число" << endl;
    else
        cout << number << " - не простое число" << endl;

    return 0;
}
