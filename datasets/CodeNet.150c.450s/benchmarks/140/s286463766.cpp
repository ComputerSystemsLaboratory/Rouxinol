#include <iostream>
#include <vector>
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

struct UnionFind {
    vector<int> v;
    int groups;
    UnionFind() {}
    UnionFind(int n): groups(n) {
        v.resize(n+1);
        FORR(i, 1, n+1) v[i] = i;
    }
    int find(int p) {
        if (v[p] == p) return p;
        return v[p] = find(v[p]);
    }
    int merge(int p, int q) {
        p = find(p);
        q = find(q);
        if (p != q) {
            v[q] = p;
            groups--;
        }
        return groups;
    }
};

struct Edge {
    int s, t, w;
    bool operator<(const Edge &o) const {
        return w < o.w;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    vector<Edge> edge(E);
    FOR(i, E) {
        auto &e = edge[i];
        cin >> e.s >> e.t >> e.w;
    }
    sort(edge.begin(), edge.end());

    UnionFind uf(V);
    int weight = 0;
    for (auto &e: edge) {
        if (uf.find(e.s) != uf.find(e.t)) {
            weight += e.w;
            uf.merge(e.s, e.t);
            if (uf.groups == 1) break;
        }
    }
    
    cout << weight << endl;

    return 0;
}