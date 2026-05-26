#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int grade;
    cout << "Введите балл: ";
    cin >> grade;

    if (grade >= 90)
        cout << "Отлично" << endl;
    else if (grade >= 75)
        cout << "Хорошо" << endl;
    else if (grade >= 50)
        cout << "Удовлетворительно" << endl;
    else
        cout << "Неудовлетворительно" << endl;

    return 0;
}
