#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;

struct UnionFind{
    vector<int> parent;
    UnionFind(int n) : parent(n, -1) {}
    int root(int x) { return parent[x] < 0 ? x : parent[x] = root(parent[x]); }
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (parent[y] < parent[x]) swap(x, y);
        if (parent[x] == parent[y]) --parent[x];
        parent[y] = x;
        return true;
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    int com, x, y;
    struct UnionFind trees(n);
    REP(i, q){
        cin >> com >> x >> y;
        if(com)
            cout << (trees.root(x) == trees.root(y) ? "1" : "0") << endl;
        else
            trees.merge(x, y);
    }
    return 0;
}