#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define all(a) (a).begin(),(a).end()

class UnionFind {
    private:
        vector<int> parent,rank;
    public:
        UnionFind(int size) {
            for (int i=0; i<size; i++) {
                parent.push_back(i);
                rank.push_back(0);
            }
        }

        int findset(int x) {
            return x==parent[x] ? x : parent[x]=findset(parent[x]);
        }

        void unite(int x,int y) {
            x=findset(x);y=findset(y);
            if (x==y) return;
            if (rank[x]>rank[y]) swap(x,y);
            parent[x]=y;
            if (rank[x]==rank[y]) rank[y]+=1;
        }

        bool same(int x,int y) {
            return findset(x)==findset(y);
        }
};

struct edge {ll u,v,cost;};
vector<edge> es;
int v,e;

bool comp(const edge& e1,const edge& e2){return e1.cost < e2.cost;}

ll kruskal(int v,int e,vector<edge> es) {
    sort(es.begin(),es.end(),comp);   
    UnionFind node(v);
    ll ret=0;
    for (int i=0; i<e; i++) {
        edge e=es[i];
        if (!node.same(e.u,e.v)) {
            ret+=e.cost;
            node.unite(e.u,e.v);
        }
    }
    return ret;
}

int main(){
    cin >> v >> e;
    for(int i=0; i<e; i++){
        int s,t,w;
        cin >> s >> t >> w;
        es.push_back(edge{s,t,w});
    }
    cout << kruskal(v,e,es) << endl;
}