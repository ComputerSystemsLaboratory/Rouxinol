#include <bits/stdc++.h>
using namespace std;

int N, M, s[505], v[505], dp[10005];

int main() {
    
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> v[i] >> s[i];
    }

    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < N; i++) {
        for (int j = M; j >= s[i]; j--) {
            dp[j] = max(dp[j], dp[j-s[i]]+v[i]);
        }
    }

    int ans = 0;
    for (int i = 0; i <= M; ++i) ans = max(ans, dp[i]);
    
    cout << ans << endl;
    
    return 0;
}