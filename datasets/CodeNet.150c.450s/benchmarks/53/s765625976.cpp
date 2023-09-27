#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<P> vp;
typedef vector<ll> vll;

map<ll, ll> primeFactorize(ll n) {
    map<ll, ll> res;
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            ++res[i];
            n /= i;
        }
    }
    if (n > 1) ++res[n];
    return res;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    ll n;
    cin >> n;
    auto res = primeFactorize(n);

    cout << n << ":";
    for (auto p : res) {
        rep(i, p.second) {
            cout << " " << p.first;
        }
    }
    cout << endl;
}