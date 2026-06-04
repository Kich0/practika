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

 int a = 0, b = 1;
 cout << "Числа Фибоначчи: ";
 for (int i = 0; i < n; i++)
 {
     cout << a << " ";
     int c = a + b;
     a = b;
     b = c;
}
 cout << endl;

 return 0;
}
