#include <bits/stdc++.h>

using ll = long long;
using namespace std;
constexpr ll inf = 1e15;
constexpr ll mod = 1e9+7;

ll dp[21][50001] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin>>N>>M;
    vector<int> C(M);
    for (int m = 0; m < M; m++) cin>>C[m];

    for (int n = 1; n <= N; n++)
        for (int m = 0; m <= M; m++) dp[m][n] = inf;

    for (int m = 1; m <= M; m++) {
        for (int n = 0; n <= N; n++) {
            dp[m][n] = dp[m-1][n];
            if (n - C[m-1] >= 0) dp[m][n] = min(dp[m][n], dp[m][n-C[m-1]] + 1);
        }
    }
    cout<<dp[M][N]<<endl;

    return 0;
}
