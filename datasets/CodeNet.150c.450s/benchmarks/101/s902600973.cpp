#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;

struct Vertex {
    vector<ll> node;
};

Vertex V[100005];
bool U[100005];
ll Parent[100005];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N, M;
    cin >> N >> M;
    REP(_, M) {
        ll a, b;
        cin >> a >> b;
        V[a].node.push_back(b);
        V[b].node.push_back(a);
    }

    REP(i, N) {
        Parent[i] = i;
    }
    memset(U, 0, sizeof(U));

    REP(i, N) {
        if (U[i])
            continue;
        queue<ll> q;
        q.push(i);
        U[i] = true;
        while (!q.empty()) {
            ll t = q.front();
            q.pop();
            for (auto &n:V[t].node) {
                if (U[n])
                    continue;
                Parent[n] = i;
                q.push(n);
                U[n] = true;
            }
        }
    }

    ll Q;
    cin >> Q;
    REP(_, Q) {
        ll s, t;
        cin >> s >> t;
        if (Parent[s] == Parent[t])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}
