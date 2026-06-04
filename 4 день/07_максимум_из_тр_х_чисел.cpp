#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int maxOfThree(int a, int b, int c)
{
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    cout << "Максимальное число = " << maxOfThree(a, b, c) << endl;

    return 0;
}
