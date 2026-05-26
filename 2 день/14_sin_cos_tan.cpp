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

    double degrees;
    cout << "Введите угол в градусах: ";
    cin >> degrees;

    const double pi = acos(-1.0);
    double radians = degrees * pi / 180.0;

    cout << "sin = " << sin(radians) << endl;
    cout << "cos = " << cos(radians) << endl;
    cout << "tan = " << tan(radians) << endl;

    return 0;
}
