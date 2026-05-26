#include <clocale>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Student
{
    string surname;
    string name;
    int age;
    float gpa;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Student students[3] = {
        {"Шакир", "Нурасыл", 18, 4.5},
        {"Иванов", "Алексей", 19, 3.8},
        {"Сейткали", "Айару", 18, 4.2}};

    for (int i = 0; i < 3; i++)
    {
        cout << "Студент " << i + 1 << ":" << endl;
        cout << "Фамилия: " << students[i].surname << endl;
        cout << "Имя: " << students[i].name << endl;
        cout << "Возраст: " << students[i].age << endl;
        cout << "Средний балл: " << students[i].gpa << endl;
    }

    return 0;
}
