#include <iostream>

using namespace std;

namespace {
}

int main() {
    int n;
    cin >> n;

    long base = (long) 1e10;
    long max_profit = (long) -1e10;

    for (int i = 0; i < n; i++) {
        long in;
        cin >> in;

        long profit = in - base;

        if (profit > max_profit)
            max_profit = profit;

        if (in < base)
            base = in;
    }

    cout << max_profit << endl;
    return 0;
}