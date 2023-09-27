#include <bits/stdc++.h>

using ll = long long;
using namespace std;
constexpr ll inf = 1e15;
constexpr ll mod = 1e9+7;

ll dp[1001][1001] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin>>Q;
    for (int q = 0; q < Q; q++) {
        string X, Y;
        cin>>X>>Y;

        for (int i = 1; i <= X.length(); i++) {
            for (int j = 1; j <= Y.length(); j++) {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                if (X[i-1] == Y[j-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
            }
        }
        cout<<dp[X.length()][Y.length()]<<endl;
    }
    return 0;
}
