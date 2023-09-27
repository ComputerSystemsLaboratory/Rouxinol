#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define _GLIBCXX_DEBUG
#define Vl vector<ll>
#define Vs vector<string>
#define Vp vector<pair<ll, ll>>
#define P pair<ll, ll>
#define ll long long
#define ALL(v) (v).begin(),(v).end()
#define endl "\n"
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define co(x) cout << x << endl
#define coel cout << endl
#define pb push_back
#define sz(v) ((int)(v).size())
using namespace std;  
const double pi = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;

void print(Vl v){
    rep(i, 0, sz(v)){
        if(i) cout << " ";
        cout << v[i];
    }
    cout << endl;
}

////////////////////////////////////////////////////////


int main() {
    ll n; cin >> n;
    Vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll ans[n];
    rep(i, 0, n) ans[i] = INF;
    rep(i, 0, n){
        *lower_bound(ans, ans + n, a[i]) = a[i];
    }
    // lower_bound(v, v+v.size(), n) : n以上となる要素の左端
    cout << lower_bound(ans, ans+n , INF) - ans << endl;

    return 0;
}

