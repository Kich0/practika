#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "Russian");

 cout << "Код\tСимвол" << endl;
 for (int i = 32; i <= 126; i++)
     cout << i << "\t" << (char)i << endl;

 return 0;
}
