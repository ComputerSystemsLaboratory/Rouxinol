#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <functional>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <utility>
#include <vector>

using namespace std;

typedef long long Long;
#define whole(xs) xs.begin(), xs.end()
#define uniq(xs) (xs.erase(unique(xs.begin(), xs.end()), xs.end()))

template<class T>
ostream& operator<<(ostream& os, const vector<T>& vs) {
    if (vs.empty()) return os << "[]";
    os << "[" << vs[0];
    for (int i = 1; i < vs.size(); i++) os << " " << vs[i];
    return os << "]";
}

const int IINF = 1<<28;
const Long LINF = 1LL<<56;
#define INF IINF

int V, E;

struct Edge {
    int s, t, w;
    Edge(int s, int t, int w) : s(s), t(t), w(w) {}
    bool operator<(const Edge& e) const {
        return w < e.w;
    }
};

vector<Edge> G;

void Input() {
    cin >> V >> E;
    for (int i = 0; i < E; i++) {
        int s, t, w; cin >> s >> t >> w;
        G.push_back(Edge(s, t, w));
    }
}

struct UnionFind {
    int N;
    vector<int> P;
    UnionFind(int N) : N(N) {
        P.clear(); P.resize(N, -1);
    }
    int query(int x) {
        if (P[x] == -1) return x;
        return P[x] = query(P[x]);
    }
    void merge(int x, int y) {
        x = query(x); y = query(y);
        if (x == y) return;
        P[y] = x;
    }
};

void Solve() {
    sort(whole(G));
    UnionFind uf(V);
    int Ans = 0;
    for (int i = 0; i < E; i++) {
        Edge& e = G[i];
        if (uf.query(e.s) == uf.query(e.t)) continue;
        Ans += e.w;
        uf.merge(e.s, e.t);
    }
    cout << Ans << endl;
}

int main() {
    Input(); Solve();
    return 0;
}