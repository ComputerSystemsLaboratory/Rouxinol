#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end() // 昇順ソート
#define rall(v)(v).rbegin(), (v).rend() // 降順ソート
#define INF 1LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair < ll, ll >
#define F first
#define S second
const int MOD = 1000000007;
template < class T > bool chmax(T & a,const T & b) { if (a < b) { a = b; return true; } return false; }
template < class T > bool chmin(T & a,const T & b) { if (a > b) { a = b; return true; } return false; }
// 任意のlogは　対数の底の変換を使う    log(N) / log(任意の底)

int main() {
    LL D;cin >> D;
    vector<LL> c(26);rep(i,26)cin >> c[i];
    vector<vector<LL>> s(D,vector<LL>(26));
    rep(i,D)rep(j,26)cin >> s[i][j];
    vector<LL> t(D);
    rep(i,D)cin >> t[i];
    map<LL,LL> m;
    LL ans = 0;
    rep(i,D){
        LL now_day = i+1;
        LL score = 0;
        m[t[i]-1] = now_day;
        rep(j,26){
            LL last = m[j];
            LL tmp = now_day - last;
            tmp *= c[j];
            score += tmp;
        }
        ans += s[i][t[i]-1];
        ans -= score;
        cout << ans << endl;
    }
}