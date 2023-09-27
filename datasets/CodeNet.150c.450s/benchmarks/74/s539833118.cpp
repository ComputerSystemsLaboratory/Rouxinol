#include <iostream>
#include <vector>
#include <climits>
#include <set>


using namespace std;


static const int MAX = 50000;


int main()
{
    int n, m;
    set<int> coins;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        coins.insert(c);
    }

    vector<int> dp(MAX + 1, INT_MAX);
    for (auto it = coins.begin(); it != coins.end(); ++it)
        dp[*it] = 1;

    for (int i = 1 ; i <= n; i++) {
        for (auto it = coins.begin(); it != coins.end(); ++it) {
            if (i - *it >= 1 && dp[i - *it] < INT_MAX) {
                dp[i] = min(dp[i], dp[i - *it] + 1);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}

