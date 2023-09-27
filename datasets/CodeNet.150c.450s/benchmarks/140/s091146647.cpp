#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

#define FORR(i,b,e) for(int i=(b);i<(int)(e);++i)
#define FOR(i,e) FORR(i,0,e)
#define dump(var) cerr << #var ": " << var << "\n"
#define dumpc(con) for(auto& e: con) cerr << e << " "; cerr<<"\n"

typedef long long ll;
typedef unsigned long long ull;

const double EPS = 1e-6;
const int d4[] = {0, -1, 0, 1, 0};

using namespace std;


struct Edge {
    int t, w;
    Edge() {}
    Edge(int t, int w): t(t), w(w) {}
    bool operator<(const Edge &o) const {
        return w > o.w;
    }
};

vector<Edge> edges[10010];


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    
    FOR(i, E) {
        int s, t, w;
        cin >> s >> t >> w;
        edges[s].push_back(Edge(t, w));
        edges[t].push_back(Edge(s, w));
    }

    set<int> vs;
    priority_queue<Edge> q;
    int total_weight = 0;
    q.push(Edge(0, 0));
    while (vs.size() != V) {
        Edge e = q.top(); q.pop();
        if (vs.find(e.t) != vs.end()) continue;
        vs.insert(e.t);
        total_weight += e.w;
        for (auto &ne: edges[e.t]) {
            if (vs.find(ne.t) != vs.end()) continue;
            q.push(ne);
        }
    }

    cout << total_weight << endl;

    return 0;
}