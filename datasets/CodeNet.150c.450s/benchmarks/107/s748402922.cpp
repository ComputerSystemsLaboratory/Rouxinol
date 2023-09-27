#include<bits/stdc++.h>
using namespace std;
using UL = unsigned long;
using ULL = unsigned long long;
using LL = long long;
#define rep(i, n) for(UL i = 0; i < (n); i++)

struct Problem {

    UL dp[1001][1001];

    void Solve() {
        string S, T; cin >> S >> T;
        rep(i, S.size() + 1) dp[i][0] = i;
        rep(i, T.size() + 1) dp[0][i] = i;
        rep(i, S.size()) {
            rep(j, T.size()) {
                UL tmp = -1;
                if (S[i] == T[j]) tmp = min(tmp, dp[i][j]);
                tmp = min(tmp, dp[i + 1][j] + 1);
                tmp = min(tmp, dp[i][j + 1] + 1);
                tmp = min(tmp, dp[i][j] + 1);
                dp[i + 1][j + 1] = tmp;
            }
        }
        cout << dp[S.size()][T.size()] << endl;
    }
};
int main() {
    unique_ptr<Problem> p(new Problem());
    cout << fixed << setprecision(10);
    p->Solve();
    return 0;
}

