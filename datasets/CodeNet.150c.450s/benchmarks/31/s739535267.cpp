#include <iostream>
#include <algorithm>
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
        maxProfit = max(maxProfit, currentDollar - minDollar);
        minDollar = min(minDollar, currentDollar);
    }

    cout << maxProfit << endl;

    return 0;
}