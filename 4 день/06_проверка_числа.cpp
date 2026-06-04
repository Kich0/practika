#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

bool isEven(int n)     { return n % 2 == 0; }
bool isPositive(int n) { return n > 0; }

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите число: ";
    cin >> n;

    cout << n << (isEven(n) ? " чётное" : " нечётное") << endl;
    cout << n << (isPositive(n) ? " положительное" : " не положительное") << endl;

    return 0;
}
