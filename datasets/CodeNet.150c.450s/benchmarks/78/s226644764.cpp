#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;
const int INF = 1e9;
 
int main()
{
	cin.sync_with_stdio(false);
    vector<int> dp(MAX, INF), res(MAX, INF), four, odd;
    for (int i = 1; i * (i + 1) * (i + 2) / 6 < MAX; i++) {
        four.push_back(i * (i + 1) * (i + 2) / 6);
        if (i * (i + 1) * (i + 2) / 6 % 2)
            odd.push_back(i * (i + 1) * (i + 2) / 6);
    }
    dp[0] = res[0] = 0;
    for (int j = 0; j < MAX; j++) {
        if (dp[j] != INF) {
            for (int k = 0; k < (int)four.size() && j + four[k] < MAX;k++) {
                dp[j + four[k]] = min(dp[j + four[k]], dp[j] + 1);
            }
        }
    }
    for (int j = 0; j < MAX; j++) {
        if (res[j] != INF) {
            for (int k = 0; k < (int)odd.size() && j + odd[k] < MAX; k++) {
                res[j + odd[k]] = min(res[j + odd[k]], res[j] + 1);
            }
        }
    }
    int n;
    while (cin >> n, n) {
        printf("%d %d\n", dp[n], res[n]);
    }
    return 0;
}