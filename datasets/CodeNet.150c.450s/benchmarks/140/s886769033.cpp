#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

struct UnionFind {
    vector<int> data;
    UnionFind(int size) : data(size, -1) {}
    bool unionSet(int x, int y) {
        x = root(x); y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y]; data[y] = x;
        }
        return x != y;
    }
    bool findSet(int x, int y) {
        return root(x) == root(y);
    }
    int root(int x) {
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    int size(int x) {
        return -data[root(x)];
    }
};

class EDGE {
public:
    int no;
    int nord1;
    int nord2;
    int value;
    EDGE(int a, int b, int c, int d) : no(a), nord1(b), nord2(c), value(d) {}
};

bool operator< (const EDGE &edge1, const EDGE &edge2) {
    return edge1.value > edge2.value;
}

bool operator> (const EDGE &edge1, const EDGE &edge2) {
    return edge1.value < edge2.value;
}

int main() {
    int V, E; // V: 頂点の数 E: 辺の数
    cin >> V >> E;
    UnionFind uf(V);
//    bool is_in[V]; // 頂点が木としてつながってるかどうか
//    for (int i = 0; i < V; i++) is_in[i] = false;
    multiset<EDGE, greater<EDGE> > edge_set;
    for (int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        EDGE edge(i, a, b, c);
        edge_set.insert(edge);
    }
    int ans = 0;
    multiset<EDGE>::iterator it = edge_set.begin();
    for (; it != edge_set.end(); it++) {
        if (uf.unionSet((*it).nord1, (*it).nord2)) {
//            printf("%d-%d edge is added\n", (*it).nord1, (*it).nord2);
            ans += (*it).value;
        }
    }
    cout << ans << endl;
    return 0;
}