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

 long long factorial = 1;
 for (int i = 1; i <= n; i++)
 factorial *= i;

 cout << n << "! = " << factorial << endl;

 return 0;
}
