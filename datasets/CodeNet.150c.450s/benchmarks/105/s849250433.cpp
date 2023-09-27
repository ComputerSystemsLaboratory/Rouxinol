#include <bits/stdc++.h>
#define pb push_back
#define pll pair <ll, ll>
#define mp make_pair
#define pyshnapyshnakaa ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define x first
#define y second
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define plll pair <pair <ll, ll>, ll>
#define pllll pair <pair <ll, ll>, pair <ll, ll> >
#define psl pair <string, ll>
#define all(a) a.begin(), a.end()
#define vvl vector <vector <ll> >

typedef long long ll;

typedef long double ld;

using namespace std;

const ll maxn = 1e6;
const ll inf = 1e14;

ll n, m, k, t;

string s;

ll st2[maxn];

ll A[maxn];

ll leading_bit(ll x) {
    for (ll q = 62; q >= 0; q++) {
        if ((st2[q] & x) != 0) {
            return q;
        }
    }
    return -1;
}

int main() {
    pyshnapyshnakaa;
    ll q, w, e, a, b, c;
    st2[0] = 1;
    for (q = 1; q < 63; q++) {
          st2[q] = st2[q - 1] * 2;
    }
    cin >> t;
    for (e = 0; e < t; e++) {
        cin >> n;
        for (q = 0; q < n; q++) {
            cin >> A[q];
        }
        bool fail = 0;
        cin >> s;
        vector <ll> basis;
        for (q = n - 1; q >= 0; q--) {
            if (s[q] == '1') {
                ll x = A[q];
                for (auto y : basis) {
                    if ((x ^ y) < x) {
                        x = x ^ y;
                    }
                }
                if (x != 0) {
                    fail = 1;
                }
            }
            else {
                ll x = A[q];
                for (auto y : basis) {
                    if ((x ^ y) < x) {
                        x = x ^ y;
                    }
                }
                if (x != 0) {
                    basis.pb(x);
                    sort(all(basis));
                    reverse(all(basis));
                }
            }
        }
        if (fail) {
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    return 0;
}
