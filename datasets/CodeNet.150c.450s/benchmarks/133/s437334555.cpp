#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }



int main(){
    ios::sync_with_stdio(false);
    int D;
    cin >> D;
    vector<int> c(26);  
    vector<vector<int>> s(D,vector<int>(26));
    rep(i,26) cin >> c[i];    
    rep(d,D) rep(i, 26) cin >> s[d][i];

    vector<int> t(D);
    vector<int> last(26,-1);
    int ans = 0;
    rep(d,D) {
        cin >> t[d];
        t[d]--;
        ans += s[d][t[d]];
        last[t[d]] = d;
        rep(i,26) {
            ans -= c[i]*(d-last[i]);
        }
        cout << ans << endl;
    }
    //chmax(ans,0);
}
