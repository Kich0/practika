#include <clocale>
#include <iostream>
#include <set>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    set<int> grades;
    int count, grade;

    cout << "Введите количество оценок: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Оценка " << i + 1 << ": ";
        cin >> grade;
        grades.insert(grade);
    }

    cout << "Уникальные оценки: ";
    for (int gradeValue : grades)
        cout << gradeValue << " ";
    cout << endl;

    cout << "Количество уникальных оценок = " << grades.size() << endl;

    return 0;
}
