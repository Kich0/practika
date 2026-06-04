#include <clocale>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "Russian");

 srand(time(0));
 int secret = rand() % 100 + 1;
 int guess;
 int attempts = 0;

 cout << "Угадайте число от 1 до 100!" << endl;
 do
 {
     cout << "Ваш вариант: ";
     cin >> guess;
     attempts++;

     if (guess < secret)
         cout << "Слишком маленькое!" << endl;
     else if (guess > secret)
         cout << "Слишком большое!" << endl;
     else
         cout << "Верно! Попыток: " << attempts << endl;
 } while (guess != secret);

 return 0;
}
