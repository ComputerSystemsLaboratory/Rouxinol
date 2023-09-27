// B - Scoring
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll d;
    cin >> d;
    vector<ll> c(26);
    vector<vector<ll>> s(d, vector<ll>(26));
    rep(i, 26) cin >> c[i];
    for(int i=0; i<d; i++){
        for(int j=0; j<26; j++){
            cin >> s[i][j];
        }
    }
    vector<ll> t(d);
    rep(i, d) cin >> t[i];
    ll score = 0;
    vector<ll> lastd(26, 0);
    rep(i, d){
        score += s[i][t[i]-1];
        lastd[t[i]-1] = i+1;
        rep(j, 26) score -= c[j]*((i+1)-lastd[j]);
        cout << score << endl;
    }
    return 0;
}