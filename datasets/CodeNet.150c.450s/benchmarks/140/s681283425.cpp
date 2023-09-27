#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef long long ll;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

/*
 * ref. [Union-Find](https://www.slideshare.net/chokudai/union-find-49066733)
 * ref. [AtCoder ABC 157 - AtCoder Live](https://www.youtube.com/watch?v=TdR816rqc3s)
 */
class UnionFind {
    public:
        UnionFind(int n = 0): d(n, -1) {}

        // 0-index, [0, n) in other words
        // Time complexity: O(a(n)) (a = inverse Achkermann function)
        int find(int x) {
            if (d[x] < 0) return x;
            return d[x] = find(d[x]);
        }

        // Return false if x and y are alreday in the same group, otherwise return true.
        // 0-index, [0, n) in other words
        // Time complexity: O(a(n)) (a = inverse Achkermann function)
        bool unite(int x, int y) {
            x = find(x);
            y = find(y);
            if (x == y) return false;
            if (d[x] > d[y]) swap(x, y);
            d[x] += d[y];
            d[y] = x;
            return true;
        }

        // 0-index, [0, n) in other words
        // Time complexity: O(a(n)) (a = inverse Achkermann function)
        bool same(int x, int y) {
            return find(x) == find(y);
        }

        // 0-index, [0, n) in other words
        // Time complexity: O(1)
        int size(int x) {
            return -d[find(x)];
        }

    private:
        vector<int> d;
};

class Edge {
    public:
        int s;
        int t;
        int w;

        bool operator<(const Edge &other) const {
            return w < other.w;
        }

        bool operator>(const Edge &other) const {
            return w > other.w;
        }
};

// vector<vector<Edge>> edges;

int main(void) {
    int V, E;
    cin >> V >> E;

    priority_queue<Edge, vector<Edge>, std::greater<Edge>> queue;

    // edges.resize(V);
    for (int i = 0; i < E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        // edges[s].push_back({t, w});
        // edges[t].push_back({s, w});
        queue.push({s, t, w});
    }

    UnionFind uf(V);

    ll ans = 0;
    while (!queue.empty()) {
        Edge edge = queue.top();
        queue.pop();
        if (uf.same(edge.s, edge.t)) continue;
        uf.unite(edge.s, edge.t);
        ans += edge.w;
    }

    cout << ans << endl;

    return 0;
}

