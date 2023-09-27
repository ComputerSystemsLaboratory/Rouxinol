#include <iostream>
using namespace std;

const int HIGHEST_RATE = 1000000000;
const int LOWEST_RATE  = 1;

/* ALDS 1_1_D: Maximum profit */
int main() {
    int n, rate, profit;
    int max_profit  = LOWEST_RATE - HIGHEST_RATE;
    int lowest_rate = HIGHEST_RATE * 2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> rate;
        profit = rate - lowest_rate;

        if (max_profit < profit) {
            max_profit = profit;
        }
        if (rate < lowest_rate) {
            lowest_rate = rate;
        }
    }

    cout << max_profit << endl;
}