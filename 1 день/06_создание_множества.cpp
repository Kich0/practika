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

    set<int> numbers = {5, 3, 8, 1, 9, 2, 7, 4, 6, 10};

    cout << "Элементы множества: ";
    for (int number : numbers)
        cout << number << " ";
    cout << endl;

    cout << "Количество элементов = " << numbers.size() << endl;

    return 0;
}
