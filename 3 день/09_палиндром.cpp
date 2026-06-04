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

 int original = number;
 int reversed = 0;
 while (number != 0)
 {
     reversed = reversed * 10 + number % 10;
     number /= 10;
  }

 if (original == reversed)
 cout << original << " - палиндром" << endl;
 else
 cout << original << " - не палиндром" << endl;

 return 0;
}
