#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int INF = 1e9+7;

int dp[50001];


int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; ++i) dp[i] = INF;
    dp[0] = 0;

    vector<int> c(m);
    for (int i = 0; i < m; ++i) cin >> c[i];

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i-c[j] >= 0) {
                dp[i] = min(dp[i], dp[i-c[j]]+1);
            }
        }
    }

    cout << dp[n] << endl;
}