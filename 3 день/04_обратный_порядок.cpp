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

 cout << "Числа от " << n << " до 1: ";
 for (int i = n; i >= 1; i--)
     cout << i << " ";
 cout << endl;

 return 0;
}
