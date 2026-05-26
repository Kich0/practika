#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int myVar = 1;
    int itemCount = 2;
    int number1 = 3;
    int totalSum = 4;
    int MAX_VALUE = 5;

    cout << "Корректные идентификаторы: ";
    cout << myVar << " " << itemCount << " " << number1
         << " " << totalSum << " " << MAX_VALUE << endl;

    cout << "Некорректные идентификаторы: 1var, my var, int, a-b, $money" << endl;

    return 0;
}
