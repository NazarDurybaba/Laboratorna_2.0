#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a;
    cout << "Введіть значення кута a = ";
    cin >> a;

    // Обчислення за першою формулою z1
    double z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);

    // Обчислення за другою формулою z2
    double z2 = 2 * sqrt(2) * cos(a) * sin(M_PI / 4 + 2 * a);

    // Виведення результатів
    cout << "z1 = " << z1 << std::endl;
    cout << "z2 = " << z2 << std::endl;

    return 0;
}
