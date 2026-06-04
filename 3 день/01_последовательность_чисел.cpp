#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "Russian");

 for (int i = 1; i <= 100; i++)
     cout << i << " ";
 cout << endl;

 return 0;
}
