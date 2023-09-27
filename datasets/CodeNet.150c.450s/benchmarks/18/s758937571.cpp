#include <iostream>
using namespace std;

const double BORROWING_AMOUNT = 100000;

int main () {
    int n;
    cin >> n;

    double value = BORROWING_AMOUNT;
    for (int i = 1; i <= n; ++i) {
        value += value * 0.05;
        int mod = (int) value % 1000;
        if (mod > 0) {
            value += 1000 - mod;
        }
    }
    cout << (int) value << endl;

    return 0;
}