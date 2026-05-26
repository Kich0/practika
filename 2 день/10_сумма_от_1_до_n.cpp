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
    cout << "Введите N: ";
    cin >> number;

    int sum = 0;
    for (int i = 1; i <= number; i++)
        sum += i;

    cout << "Сумма = " << sum << endl;

    return 0;
}
