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

 cout << "Чётные числа от 1 до " << n << ": ";
 for (int i = 2; i <= n; i += 2)
     cout << i << " ";
 cout << endl;

 return 0;
}
