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

    for (int i = 1; i <= 10; i++)
        cout << number << " x " << i << " = " << number * i << endl;

    return 0;
}
