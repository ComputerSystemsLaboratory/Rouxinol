#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int timeLength;
    cin >> timeLength;

    int *dollar = new int[timeLength];
    for (int i = 0; i < timeLength; i++) cin >> dollar[i];

    int maxProfit = dollar[1] - dollar[0];
    int minDollar = dollar[0];
    for (int i = 1; i < timeLength; i++) {
        maxProfit = max(maxProfit, dollar[i] - minDollar);
        minDollar = min(minDollar, dollar[i]);
    }

    cout << maxProfit << endl;

    return 0;
}