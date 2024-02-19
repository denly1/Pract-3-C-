#include <Windows.h>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    setlocale(0, "");

    const int a = 3;
    const int b = 5;
    double array[a][b];
    double sum, average;

   
    for (int q = 0; q < a; q++) {
        cout << "Введите числа: ";
        for (int r = 0; r < b; r++) {
            cin >> array[q][r];
        }
    }

    
    for (int i = 0; i < a; i++) {
        sum = 0;
        for (int j = 0; j < b; j++) {
            sum += array[i][j];
        }
        average = sum / 5;
        cout << "Среднее арифметическое: " << average << endl;
    }

    return 0;
}
