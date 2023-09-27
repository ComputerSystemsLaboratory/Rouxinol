#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int D; cin >> D;
    vector<int> c(26);
    rep(i,26) cin >> c[i];
    vector<vector<int>> s(D,vector<int>(26));
    rep(i,D){
        rep(j,26){
            cin >> s[i][j];
        }
    }
    vector<int> t(D);
    rep(i,D) cin >> t[i];

    vector<int> day(26,0);

    ll score=0;
    int tuday=1;
    rep(z,D){
        score += s[z][t[z]-1];
        day[t[z]-1] = z+1;
        rep(i,26){
            score -= c[i] * ((z+1) - day[i]);
        }
        cout << score << endl;
    }

}
