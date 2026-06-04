#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите N: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;

    return 0;
}
