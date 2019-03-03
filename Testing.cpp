#include <iostream>

using namespace std;

int main() {
    int sum, kop, rub;
    cin >> sum;
    kop = sum % 100;
    rub = sum / 100;

    if (rub == 0) sum = sum;
    else if (rub % 10 == 0 || (rub % 10 > 4 && rub % 10 < 10) || (rub % 100 > 9 && rub % 100 < 21))
        cout << rub << " rublei ";
    else if (rub % 10 == 1) cout << rub << " rubl ";
    else cout << rub << " rublya ";

    if (kop == 0) sum = sum;
    else if (kop % 10 == 0 || (kop % 10 > 4 && kop % 10 < 10) || (kop % 100 > 9 && kop % 100 < 21))
        cout << kop << " kopeek";
    else if (kop % 10 == 1) cout << kop << " kopeyka";
    else cout << kop << " kopeiki";

    if (kop == 0 && rub == 0) cout << "Nichego ne kupleno";
    return 0;
}