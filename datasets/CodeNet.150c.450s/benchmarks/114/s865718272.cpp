#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>

using namespace std;

class UnionFind {
public:
    vector<int> parent;
    UnionFind(int n) : parent(n, -1) { }
    void unite(int x, int y) {
        x = root(x), y = root(y);
        if (x != y) {
            if (parent[y] < parent[x]) swap(x, y);
            parent[x] += parent[y];
            parent[y] = x;
        }
    }
    bool find(int x, int y) {
        return root(x) == root(y);
    }
    int root(int x) {
        return parent[x] < 0 ? x : parent[x] = root(parent[x]);
    }
};

int main() {
    int n;
    cin >> n;
    UnionFind uf(n);
    vector<pair<int,pair<int,int> > > E;
    int cost;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cin >> cost;
            if (0 <= cost) {
                E.push_back(make_pair(cost, make_pair(i, j)));
            }
        }
    }
    sort(E.begin(), E.end());
    int res = 0;
    for (int i=0; i<(int)E.size(); ++i) {
        if ( ! uf.find(E[i].second.first, E[i].second.second)) {
            uf.unite(E[i].second.first, E[i].second.second);
            res += E[i].first;
        }
    }
    cout << res << endl;
    return 0;
}