#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<bool> f(40001); 
    for(int mask = 0; mask < (1LL << n); mask++){
        int sum = 0;
        rep(i, 0, n){
            if(mask & (1LL << i)) sum += a[i];
        }
        f[sum] = true;
    }
    int q;
    cin >> q;
    rep(i, 0, q){
        int m;
        cin >> m;
        if(f[m]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}