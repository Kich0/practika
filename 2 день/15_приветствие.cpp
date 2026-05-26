#include <clocale>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    string name;
    int age;

    cout << "Введите имя: ";
    getline(cin, name);
    cout << "Введите возраст: ";
    cin >> age;

    cout << "Здравствуйте, " << name << "!" << endl;
    cout << "Возраст: " << age << endl;

    return 0;
}
