#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int getSum(int a, int b)
{
    return a + b;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Сумма = " << getSum(a, b) << endl;

    return 0;
}
