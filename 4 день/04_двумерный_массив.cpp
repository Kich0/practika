#include <clocale>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Матрица:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    int sum = 0, diagSum = 0, maxEl = m[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            sum += m[i][j];
            if (i == j) diagSum += m[i][j];
            if (m[i][j] > maxEl) maxEl = m[i][j];
        }

    cout << "Сумма всех элементов = " << sum << endl;
    cout << "Сумма главной диагонали = " << diagSum << endl;
    cout << "Максимальный элемент = " << maxEl << endl;

    return 0;
}
