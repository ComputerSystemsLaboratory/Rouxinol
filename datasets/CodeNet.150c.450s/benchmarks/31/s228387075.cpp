#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_profit = numeric_limits<int>::min();
    int min_value = numeric_limits<int>::max();

    for (int x; n-- && cin >> x;) {
        int profit = x - min_value;
        if (profit > max_profit)
            max_profit = profit;

        if (x < min_value)
            min_value = x;
    }

    cout << max_profit << endl;

    return 0;
}