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

    double radius;
    cout << "Введите радиус: ";
    cin >> radius;

    const double pi = acos(-1.0);
    cout << "Площадь = " << pi * radius * radius << endl;

    return 0;
}
