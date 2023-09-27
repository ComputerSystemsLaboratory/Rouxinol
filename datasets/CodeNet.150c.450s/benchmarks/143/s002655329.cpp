#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define yorn(f) cout<<((f)?"Yes":"No")<<endl;
#define YORN(f) cout<<((f)?"YES":"NO")<<endl;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i, n) for (ll i = 1; i < (ll)(n); i++)
#define all(x) (x).begin(), (x).end()
#define put(x) cout << x << endl;
#define println(x) cout << x << endl;
using namespace std;
void Main()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    rep(i, n) cin >> A[i];

    ll Q;
    cin >> Q;
    vector<ll> B(Q), C(Q);
    rep(i, Q) cin >> B[i] >> C[i];
    
    vector<ll> x(100001);
    rep(i, n) x[A[i]]++;

    ll S = 0;
    rep(i, x.size()) S += x[i] * i;

    rep(i, Q) {
        ll b = B[i];
        ll c = C[i];
        ll cnt = x[b];
        x[b] = 0;
        x[c] += cnt;

        S -= b * cnt;
        S += c * cnt;
        put(S);
    }


}
signed main(){ Main();return 0;}