#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <set>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <climits>
#include <fstream>
#include <bitset>
#include <time.h>
#include <assert.h>
#include <random>

#define LL long long
#define VI vector<int>
#define VL vector<long long>
#define FOR(i,a,b) for(int i= (a); i<((int)b); ++i)
#define RFOR(i,a) for(int i=(a); i >= 0; --i)
#define FOE(i,a) for(auto i : a)
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define SUM(x) std::accumulate(ALL(x), 0LL)
#define MIN(v) *std::min_element(v.begin(), v.end())
#define MAX(v) *std::max_element(v.begin(), v.end())
#define EXIST(v,x) (std::find(v.begin(), v.end(), x) != v.end())
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define EPS 1e-14


using namespace std;


struct Edge {
    int from;
    int to;
    int cost;
    Edge(int from, int to, int cost) : from(from), to(to), cost(cost) {}
    bool operator<(const Edge& edge) const {
        return this->cost < edge.cost;
    }
    bool operator>(const Edge& edge) const {
        return this->cost > edge.cost;
    }
};

class UnionFind {
public:
    vector<int> parent;
    vector<int> setSize;

    UnionFind(unsigned int size) {
        parent.resize(size + 1);
        iota(parent.begin(), parent.end(), 0);
        setSize.resize(size + 1, 1);
    }

    // x??¨y???????????????????±??????????
    bool isSameSet(int x, int y) {
        return findRoot(x) == findRoot(y);
    }

    // x??¨y????±??????????????????????
    void unionSet(int x, int y) {
        x = findRoot(x);
        y = findRoot(y);
        if (x == y) { return; }

        parent[x] = y;
        setSize[y] += setSize[x];
    }

private:
    // ??¨??????????±???????
    int findRoot(int x) {
        if (parent[x] == x) {
            return x;
        }
        else {
            return parent[x] = findRoot(parent[x]);
        }
    }
};

/**
 * ??°?????????????°???¨?????¨????±??????????O(|E| log|V|)
 * @param num_of_node ???????????°
 * @param edges?????¨?????????????????°????????????u -> v??¨v -> u??????????????\??????
 * @return
 */
long long kruskal(unsigned int num_of_node, vector<Edge> edges) {
    sort(edges.begin(), edges.end());

    UnionFind uf(num_of_node);

    long long ans = 0;
    for (Edge e : edges) {
        if (!uf.isSameSet(e.from, e.to)) {
            uf.unionSet(e.from, e.to);
            ans += e.cost;
        }
    }
    return ans;
}

int main(int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V, E;
    cin >> V >> E;

    vector<Edge> edges;
    FOR(i, 0, E) {
        int s, t, w;
        cin >> s >> t >> w;
        edges.emplace_back(Edge(s, t, w));
        edges.emplace_back(Edge(t, s, w));
    }

    cout << kruskal(V, edges) << endl;

    return 0;
}