#include <bits/stdc++.h>
#define REP(i,s,e) for(int i=(s); i<(e);i++)
#define rep(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
#define repe(i,n) for(auto &&i:n)
#define all(v) (v).begin(),(v).end()
#define decimal fixed<<setprecision(20)
#define fastcin() cin.tie(0);ios::sync_with_stdio(false)
using namespace std;
using LL = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = 1e9;
const LL LLINF = 1e16;

int main(){
    int n;
    cin >> n;
    while(n > 0){
        vector<string> s(n);
        rep(i, n) cin >> s[i];
        int ans = 0;
        rep(i, n-1){
            if(s[i][1] == s[i+1][1]) ans++;
        }
        cout << ans << endl;
        cin >> n;
    }
}
