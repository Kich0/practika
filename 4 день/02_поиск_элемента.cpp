#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int N = 5;
    int arr[N] = {3, 7, 1, 9, 4};
    int x;

    cout << "Массив: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Введите число для поиска: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == x)
        {
            cout << "Число " << x << " найдено, индекс = " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Число " << x << " не найдено" << endl;

    return 0;
}
