#include <cmath>
#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    double x;
    cout << "Введите x: ";
    cin >> x;

    cout << "y = " << sqrt(x) + x * x << endl;

    return 0;
}
