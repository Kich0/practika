#include <algorithm>
#include <clocale>
#include <iostream>
#include <iterator>
#include <set>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    set<int> firstSet = {1, 2, 3, 4};
    set<int> secondSet = {3, 4, 5, 6};
    set<int> unionSet, intersectionSet, differenceSet;

    set_union(firstSet.begin(), firstSet.end(), secondSet.begin(), secondSet.end(),
              inserter(unionSet, unionSet.begin()));
    set_intersection(firstSet.begin(), firstSet.end(), secondSet.begin(), secondSet.end(),
                     inserter(intersectionSet, intersectionSet.begin()));
    set_difference(firstSet.begin(), firstSet.end(), secondSet.begin(), secondSet.end(),
                   inserter(differenceSet, differenceSet.begin()));

    cout << "Объединение: ";
    for (int number : unionSet)
        cout << number << " ";
    cout << endl;

    cout << "Пересечение: ";
    for (int number : intersectionSet)
        cout << number << " ";
    cout << endl;

    cout << "Разность: ";
    for (int number : differenceSet)
        cout << number << " ";
    cout << endl;

    return 0;
}
