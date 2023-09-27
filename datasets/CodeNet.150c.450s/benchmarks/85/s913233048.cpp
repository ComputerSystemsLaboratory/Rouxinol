#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int n;
struct rcdata {
    int rr; int c;
};
vector<rcdata> m(110);
long long dp[110][110];

long long rec(int l, int r) {
    // cout << "l " << l << " r " << r << endl;
    if(dp[l][r] != 1e9) return dp[l][r];
    if(abs(l-r) <= 1) return dp[l][r] = 0;
    for(int mid = l+1; mid <= r-1; ++mid) {
        long long total = rec(l, mid)+rec(mid,r)+(m.at(l).rr*m.at(mid).rr*m.at(r-1).c);
        chmin(dp[l][r], total);
    }
    return dp[l][r];
}

int main() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> m.at(i).rr >> m.at(i).c;
    }

    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= n; ++j) {
            dp[i][j] = 1e9;
        }
    }

    cout << rec(0, n) << endl;
}
