#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
// #define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
// const int INF = 1e12;

int n;
vector<int> a;
int memo[21][400001];

bool solve(int i, int m){
    if(memo[i][m] != -1) return memo[i][m];
    if(m == 0) return true;
    if(i >= n) return false;
    // bool res = solve(i + 1, m) || solve(i + 1, m - a[i]);
    // return res;
    return memo[i][m] = solve(i + 1, m) || solve(i + 1, m - a[i]);
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, 21) rep(j, 0, 400001) memo[i][j] = -1;
    int q;
    cin >> q;
    rep(i, 0, q){
        int m;
        cin >> m;
        if(solve(0, m)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}