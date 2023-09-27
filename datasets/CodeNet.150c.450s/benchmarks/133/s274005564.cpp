#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
typedef int64_t Int;

int main(){
    int D;
    cin >> D;
    vector<int> c(26);
    rep(i,26) cin >> c[i];
    vector<vector<int>> s(D,vector<int>(26));
    rep(j,D) rep(i,26) cin >> s[j][i];

    vector<int> t(D);
    rep(j,D) cin >> t[j];
    vector<vector<int>> last(D, vector<int>(26,-1));
    Int manzoku = 0;
    rep(j,D) {
        manzoku += s[j][t[j]-1];
        for (int k = j; k < D; k++) last[k][t[j]-1] = j;
        rep(i,26) {
            manzoku -= c[i] * (j - last[j][i]);
        }
        cout << manzoku << endl;
    }

    //rep(j,D) cout << t[j] << endl;
}