#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

using ll = long long;
using pii  = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for (int i = ((int)(n)); i >= 1; i--)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e18)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

using Edge = pair<int, ll>;

int main(){
    int v, e, r;
    cin >> v >> e >> r;
    vector<vector<Edge>> g(v);
    rep(i, e) {
        int s, t, d;
        cin >> s >> t >> d;
        g[s].emplace_back(t, d);
    }
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    vll dist(v, INF);
    q.emplace(0, r);
    dist[r] = 0;
    while (!q.empty()) {
        auto p = q.top(); q.pop();
        ll d = p.first; int cv = p.second;
        if (dist[cv] < d) continue;
        for (Edge t : g[cv]) {
            ll nd = d + t.second;
            int nv = t.first;
            if (dist[nv] <= nd) continue;
            q.emplace(nd, nv);
            dist[nv] = nd;
        }
    }
    rep(i, v) {
        if (dist[i]!=INF) cout << dist[i] << endl;
        else cout << "INF" << endl;
    }
    return 0;
}

