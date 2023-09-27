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
typedef vector<vector<ll>> Graph ;

void Main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> A(m), B(m);
    rep(i, m) cin >> A[i] >> B[i];
    rep(i, m) {
        A[i]--;
        B[i]--;
    }
    
    Graph G(n);
    rep(i, m) {
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    queue<ll> que;
    que.push(0);

    vector<ll> d(n, -1);
    d[0] = 0;

    while (!que.empty()) {
        ll v = que.front();
        que.pop();
        for (ll next: G[v]) {
            if (d[next] < 0) {
                d[next] = v + 1;
                que.push(next);
            }
        }
    }

    if (*min_element(all(d)) < 0) {
        put("No");
    }

    put("Yes");
    repi (i, n) {
        put(d[i]);
    }
}
signed main(){ Main();return 0;}