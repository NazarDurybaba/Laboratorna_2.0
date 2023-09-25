#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a;
    cout << "Ââåä³òü çíà÷åííÿ êóòà a=";
    cin >> a;

    // Îá÷èñëåííÿ çà ïåðøîþ ôîðìóëîþ z1
    double z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);

    // Îá÷èñëåííÿ çà äðóãîþ ôîðìóëîþ z2
    double z2 = 2 * sqrt(2) * cos(a) * sin(M_PI / 4 + 2 * a);

    // Âèâåäåííÿ ðåçóëüòàò³â
    cout << "z1 = " << z1 << std::endl;
    cout << "z2 = " << z2 << std::endl;

    return 0;
}
