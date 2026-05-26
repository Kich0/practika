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

    long long factorial = 1;
    for (int i = 1; i <= number; i++)
        factorial *= i;

    cout << number << "! = " << factorial << endl;

    return 0;
}
