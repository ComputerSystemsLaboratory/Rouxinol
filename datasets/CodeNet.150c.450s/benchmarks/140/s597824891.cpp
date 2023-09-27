#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
#include <iterator>
using namespace std;

struct UnionFind {
    vector<int> data;
    UnionFind(int n) : data(n, -1) { }
    int root(int x) {
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    bool same(int x, int y) { return root(x) == root(y); }
    void merge(int x, int y) {
        x = root(x); y = root(y);
        if(x != y) {
            data[x] += data[y];
            data[y] = x;
        }
    }
};

int main() {
    int V, E; cin >> V >> E;
    vector<pair<int, pair<int, int> > > ES(E);
    for(int i = 0; i < E; i++) {
        cin >> ES[i].second.first >> ES[i].second.second >> ES[i].first;
    }
    sort(begin(ES), end(ES));
    int ans = 0;
    UnionFind uf(V);
    for(auto item : ES) {
        if(uf.same(item.second.first, item.second.second) == false) {
            ans += item.first;
            uf.merge(item.second.first, item.second.second);
        }
    }
    cout << ans << endl;
}