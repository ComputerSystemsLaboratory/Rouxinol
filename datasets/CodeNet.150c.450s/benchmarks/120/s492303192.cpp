#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)

typedef bitset<10000> bs;
int R, C;
int check(const vector<bs>& s) {
    int res = 0;
    rep(j, C) {
        int cnt = 0;
        rep(i, R) if(s[i][j]) cnt++;
        res += max(cnt, R - cnt);
    }
    return res;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> R >> C && R) {
        vector<bs> senbei(R, bs(0));
        bool in_;
        rep(i, R) rep(j, C) {
            cin >> in_;
            if(in_) senbei[i][j] = 1;
        }
        bs to_rev(0); rep(i, C) to_rev[i] = 1;
        vector<bs> temp;
        int ans = 0;
        rep(S, 1 << R) {
            temp = senbei;
            rep(i, R) if((S >> i) & 1)
              temp[i] ^= to_rev;
            ans = max(ans, check(temp));
        }
        cout << ans << endl;
    }
    return 0;
}