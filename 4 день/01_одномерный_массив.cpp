#include <clocale>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int N = 10;
    int arr[N];
    srand(time(0));
    for (int i = 0; i < N; i++)
        arr[i] = rand() % 20 + 1;

    cout << "Массив: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    int sum = 0, maxEl = arr[0], minEl = arr[0], evenCount = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
        if (arr[i] > maxEl) maxEl = arr[i];
        if (arr[i] < minEl) minEl = arr[i];
        if (arr[i] % 2 == 0) evenCount++;
    }

    cout << "Сумма = " << sum << endl;
    cout << "Максимальный элемент = " << maxEl << endl;
    cout << "Минимальный элемент = " << minEl << endl;
    cout << "Количество чётных = " << evenCount << endl;

    return 0;
}
