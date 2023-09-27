#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int d[20] = {0};
    for (int i=0; i<m; ++i) {
        cin >> d[i];
    }
 
    int dp[50001];
    fill_n(dp, 50001, n);
    dp[0] = 0;
    for (int i=1; i<=n; ++i) {
        for (int j=0; j<20; ++j) {
            if (i - d[j] >= 0) {
                dp[i] = min(dp[i], dp[i - d[j]] + 1);
            }
        }
    }
    cout << dp[n] << "\n";
 
    return 0;
}