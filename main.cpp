/*
План разработки решения А:
    1. ввести и запомнить количество чисел ✓
    2. ввести и запомнить все числа ✓
    3. вывести все числа ✓
    4. вывести все пары чисел с разных позиций ✓
    5. вывести все произведения пар чисел с разных позиций ✓
    6. вывести все произведения пар чисел с разных позиций, кот. делятся на 14 ✓
    7. вывести max произведение пар чисел с разных позиций, кот. делится на 14

План разработки решения Б:
1. ввести и запомнить количество чисел
2. ввести число и:
    • если оно делится на 14, возможно записать его в рекордсмены как m14_1 либо m14_2
    • если оно делится на 7, но не на 2, возможно записать его в рекордсмены как m7not2
    • если оно делится на 2, но не на 7, возможно записать его в рекордсмены как m2not7
    • если оно не делится ни на 2 ни на 7, возможно записать его в рекордсмены mnot2not7
    • вывести эти пять рекордсменов
3. скомбинировать из пяти рекордсменов пять произведений
4. выбрать максимальное произведение
*/

#include <iostream>

using namespace std;

int main() {
    int q = 0;
    cin >> q;

    int numbers[q];
    for (int i = 0; i < q; i++) {
        cin >> numbers[i];
    }

    int champion = -1;
    for (int i = 0; i < q; i++)
        for (int j = i + 1; j < q; j++) {
            int tmp = numbers[i] * numbers[j];
            if (tmp % 14 == 0 and tmp > champion)
                champion = tmp;
        }

    cout << champion << endl;
    return 0;
}
