#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

typedef long long ll;
typedef pair<int, int> P;

#define MAX 100005
#define INF INT_MAX

class Tree
{
    vector<int> rank, id; 
public:
    Tree(int n) : rank(n), id(n) {
        rep(i,n) id[i] = i;
    }
    int getId(int n) {
        if (n != id[n]) id[n] = getId(id[n]);
        return id[n];
    }
    void uniteTree(int u, int v) {
        u = getId(u);
        v = getId(v);
        if (rank[u] > rank[v]) swap(u,v);
        if (rank[u] == rank[v]) rank[v]++;
        id[u] = v;
    }

};

struct Edge
{
    int u, v;
    int cost;
    bool operator<(const Edge& e) const { return this->cost < e.cost; }
};

int main(int, char**)
{
    int n;
    cin >> n;

    vector<Edge> E;
    int tmp;
    rep(i,n) rep(j,n) {
        cin >> tmp;
        if (i >= j) continue;
        if (tmp == -1) continue;
        E.push_back({i,j,tmp});
    }

    sort(E.begin(), E.end());

    Tree tree(n);
    ll ans = 0;
    rep(i,E.size()) {
        int u = E[i].u;
        int v = E[i].v;
        if (tree.getId(u) != tree.getId(v)) {
            tree.uniteTree(u,v);
            ans += E[i].cost;
        }
    }

    cout << ans << endl;

    return 0;
}

