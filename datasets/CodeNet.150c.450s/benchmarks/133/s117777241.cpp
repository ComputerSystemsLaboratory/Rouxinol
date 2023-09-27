#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0;}





int main() {
    int D;
    cin >> D;
    vector<int>c(26);
    rep(i,26) cin >> c[i];
    vector<vector<ll>>s(D,vector<ll>(26));
    rep(i,D) {
        rep(j,26) cin >> s[i][j];
    }
    vector<ll>t(D);
    rep(i,D) {
        int a;
        cin >> a;
        t[i] = a;
    }
    vector<ll>last(26);
    ll score = 0;
    rep(i,D) {
        score += s[i][t[i]-1];
        last[t[i]-1] = i+1;
        rep(j,26) {
            score -= c[j]*((i+1)- last[j]);
        }
        cout << score << endl;
    }
}