#include <iostream>
using namespace std;

const int maxInput = 1000000000;

int main(void)
{
    int timeLength;
    cin >> timeLength;

    int currentDollar, minDollar;
    cin >> minDollar;
    int maxProfit = maxInput * -1;
    for (int i = 1; i < timeLength; i++) {
        cin >> currentDollar;
        if (maxProfit < currentDollar - minDollar) {
            maxProfit = currentDollar - minDollar;
        }
        if (minDollar > currentDollar) {
            minDollar = currentDollar;
        }
    }

    cout << maxProfit << endl;

    return 0;
}