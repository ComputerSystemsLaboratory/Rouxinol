#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
using vecInt = vector<int>;
using vecLong = vector<long long>;
#define rep(i,l,n) for(int i=l;i<n;i++)

const ll mod = ll(1e9) + 7;
const int INF = 1<<29;
const ll lINF = 1l<<40;

int main(){
    int D;
    cin >> D;
    vecInt c(26);
    rep(i,0,26) cin >> c[i];
    vector<vecInt> s(D,vecInt(26));
    rep(i,0,D) rep(j,0,26) cin >> s[i][j];
    vecInt t(D);
    rep(i,0,D) cin >> t[i];
    ll score = 0l;
    vecInt last(26);
    rep(i,0,D){
        score += s[i][t[i]-1];
        last[t[i]-1] = i + 1;
        rep(j,0,26){
            if (j==t[i]-1) continue;
            score -= c[j] * ((i + 1) - last[j]);
        }
        cout << score << endl;
    }
    return 0;
}