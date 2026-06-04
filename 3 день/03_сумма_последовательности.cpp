#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "Russian");

 int n;
 cout << "Введите N: ";
 cin >> n;

 int sum = 0;
 for (int i = 1; i <= n; i++)
 sum += i;

 cout << "Сумма от 1 до " << n << " = " << sum << endl;

 return 0;
}
