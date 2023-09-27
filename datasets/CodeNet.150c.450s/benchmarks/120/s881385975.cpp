#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

int solve(vector<vector<int>> a, int s) {
    int R = a.size(), C = a[0].size();
    rep(i, R) {
        if ((s >> i) & 1) {
            rep(j, C) a[i][j] ^= 1;
        }
    }
    int ret = 0;
    rep(j, C) {
        int n = 0;
        rep(i, R) {
            if (a[i][j]) n++;
        }
        ret += max(n, R - n);
    }
    return ret;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int R, C;
    while (cin >> R >> C, R) {
        vector<vector<int>> a(R, vector<int>(C));
        rep(i, R) rep(j, C) cin >> a[i][j];
        int ans = 0;
        rep(s, 1 << R) {
            ans = max(ans, solve(a, s));
        }
        cout << ans << endl;
    }

}