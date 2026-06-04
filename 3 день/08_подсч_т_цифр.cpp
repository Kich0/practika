#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "Russian");

 int number;
 cout << "Введите число: ";
 cin >> number;

 int count = 0, sum = 0;
 int temp = number;
 while (temp != 0)
 {
     sum += temp % 10;
     temp /= 10;
     count++;
  }

 cout << "Количество цифр = " << count << endl;
 cout << "Сумма цифр = " << sum << endl;

 return 0;
}
