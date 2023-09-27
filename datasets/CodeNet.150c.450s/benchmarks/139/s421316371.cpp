#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int) x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);

const int mxN = 1e5 + 123;

int n, m;
vi adj[mxN];
ll dist[mxN];
int par[mxN];

void dijkstra() {
    priority_queue< pair<ll, int>, vector< pair<ll, int> >, greater< pair<ll, int> > > PQ;
    dist[1] = 0;
    PQ.push({0, 1});
    while (!PQ.empty()) {
        int u = PQ.top().S;
        PQ.pop();
        for (int v : adj[u]) {
            if (dist[v] > dist[u] + 1) {
                dist[v] = dist[u] + 1;
                par[v] = u;
                PQ.push({dist[v], v});
            }
        }
    }
}

int main() {
    optimize();
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].PB(v), adj[v].PB(u);
    }
    fill(dist, dist + mxN, inf);
    fill(par, par + mxN, -1);
    dijkstra();
    bool ok = 1;
    for (int i = 2; i <= n; ++i) {
        if (par[i] == -1) {
            ok = 0;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    if (ok) {
        for (int i = 2; i <= n; ++i) cout << par[i] << endl;
    }
    return 0;
}


















