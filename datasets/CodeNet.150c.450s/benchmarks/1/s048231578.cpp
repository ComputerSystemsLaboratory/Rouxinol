#include<bits/stdc++.h>
using namespace std;
using UL = unsigned long;
using ULL = unsigned long long;
using LL = long long;
#define rep(i, n) for(UL i = 0; i < (n); i++)

struct Problem {

    void Solve() {
        UL N; cin >> N;
        vector<UL> dp(N + 1, -1); dp[0] = 0;
        cin >> dp[1];
        rep(i, N - 1) {
            UL a; cin >> a;
            UL l, r; l = 0; r = N + 2;
            while (l + 1 < r) {
                UL m = (l + r) >> 1;
                if (dp[m] < a) l = m; else r = m;
            }
            dp[l + 1] = a;
        }
        UL ans = 0;
        rep(i, N + 1) if (dp[i] != -1) ans = i;
        cout << ans << endl;
    }
};
int main() {
    unique_ptr<Problem> p(new Problem());
    cout << fixed << setprecision(10);
    p->Solve();
    return 0;
}

