/**
*    author:  boutarou
*    created: 28.06.2020 21:09:26
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < int(n); i++)
#define fcout cout << fixed << setprecision(15)
using lint = long long;
using P = pair<int, int>;

template<class T> inline bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const double PI = 3.1415926535897932;

int d;
int c[30];
int s[400][30];
int ans[400];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> d;
    rep(i, 26) cin >> c[i];
    rep(i, d) {
        rep(j, 26) {
            cin >> s[i][j];
        }
    }
    rep (i, d) {
        cin >> ans[i];
        ans[i]--;
    }
    int cnt = 0;
    int previous[30];
    rep(i, 26) previous[i] = -1;
    rep(i, d) {
        cnt += s[i][ans[i]];
        previous[ans[i]] = i;
        rep(j, 26) {
            cnt -= c[j] * (i - previous[j]);
        }
        cout << cnt << endl;
    }
    
    return 0;
}