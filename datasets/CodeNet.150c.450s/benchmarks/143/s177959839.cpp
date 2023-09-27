#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define loop(i, a, n) for(ll i = (a); i < (n); i++)
#ifdef _DEBUG
#define dd(x) cout << #x << " : " << x << endl
#else
#define dd(x)
#endif
using namespace std;
using ll = int64_t;
using P = pair<ll, ll>;

int main(){
    ll n; cin >> n;
    map<ll, ll> a;
    ll sum = 0;
    rep(i, n) {
        ll tmp; cin >> tmp;
        a[tmp]++;
        sum += tmp;
    }
    ll q; cin >> q;
    rep(i, q) {
        ll b, c; cin >> b >> c;
        a[c] += a[b];
        sum -= b*a[b];
        sum += c*a[b];
        a[b] = 0;
        cout << sum << endl;
    }

    return 0;
}