#include <bits/stdc++.h>
#define int long long
typedef long long ll;
using namespace std;

const ll MAX = 200000;
const ll INF = 1001001001;
const ll MOD = 1000000007;
const double PI=3.1415926535897932;

ll V, E, ans=0, tmp=0;
vector<pair<ll, pair<ll,ll> > > G;

struct UnionFind {
    vector<int> size, parents;
    UnionFind() {}
    UnionFind(int n) {  // make n trees.
        size.resize(n, 0);
        parents.resize(n, 0);
        for (int i = 0; i < n; i++) {
            makeTree(i);
        }
    }
    void makeTree(int x) {
        parents[x] = x;  // the parent of x is x
        size[x] = 1;
    }
    bool isSame(int x, int y) { return findRoot(x) == findRoot(y); }
    bool unite(int x, int y) {
        x = findRoot(x);
        y = findRoot(y);
        if (x == y) return false;
        if (size[x] > size[y]) {
            parents[y] = x;
            size[x] += size[y];
        } else {
            parents[x] = y;
            size[y] += size[x];
        }
        return true;
    }
    int findRoot(int x) {
        if (x != parents[x]) {
            parents[x] = findRoot(parents[x]);
        }
        return parents[x];
    }
    int treeSize(int x) { return size[findRoot(x)]; }
};

void kruskal() {
    UnionFind tree(V);
    sort(G.rbegin(), G.rend());
    while(!G.empty()) {
        pair<ll,pair<ll,ll> > pp = G.back();
        G.pop_back();
        if(tree.isSame(pp.second.first, pp.second.second)) continue;
        ans += pp.first;
        tree.unite(pp.second.first, pp.second.second);
    }

}

signed main(){
    cin >> V >> E;
    for(int i=0;i<E;i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        G.push_back(make_pair(c, make_pair(a, b)));
    }
    kruskal();
    cout << ans << endl;
    return 0;
}
