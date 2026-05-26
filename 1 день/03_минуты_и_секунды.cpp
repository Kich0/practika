#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int value;
    cout << "Введите число: ";
    cin >> value;

    cout << "Минуты = " << value * 60 << endl;
    cout << "Секунды = " << value * 3600 << endl;

    return 0;
}
