/*
Single Source Shortest Path | Aizu Online Judge http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A

 */
#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#define FORR(i,b,e) for(int i=(b);i<(int)(e);++i)
#define FOR(i,e) FORR(i,0,e)
#define dump(var) cerr << #var ": " << var << "\n"
#define dumpc(con) for(auto& e: con) cerr << e << " "; cerr<<"\n"

typedef long long ll;
typedef unsigned long long ull;

const double EPS = 1e-6;
const int d4[] = {0, -1, 0, 1, 0};

using namespace std;

typedef pair<int,int> Pii;

const int INF = numeric_limits<int>::max();


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;
    vector<vector<Pii>> edge(V);
    FOR(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        edge[s].push_back(make_pair(t, d));
    }
    vector<int> dist(V, INF);
    dist[r] = 0;
    priority_queue<Pii, vector<Pii>, greater<Pii>> q;
    q.push(Pii(0, r));
    while (!q.empty()) {
        Pii cur = q.top();
        q.pop();
        int cdist = cur.first, cv = cur.second;
        if (dist[cv] < cdist) continue;
        FOR(i, edge[cv].size()) {
            int nd = cdist + edge[cv][i].second,
                nv = edge[cv][i].first;
            if (nd < dist[nv]) {
                dist[nv] = nd;
                q.push(Pii(nd, nv));
            }
        }
    }

    for(auto &d: dist) {
        if (d == INF) cout << "INF";
        else cout << d;
        cout << '\n';
    }

    
    return 0;
}