#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;

class UnionFind{
    public:
    vector< int > p,rank;
    UnionFind(int sz){
        p.resize(sz,0);
        rank.resize(sz,0);
        REP(i,sz) p[i]=i;
    }

    int find(int x){
        if(p[x]==x) return x;
        return p[x]=find(p[x]);
    }
    bool same(int x,int y){
        return find(x)==find(y);
    }
    void unite(int x,int y){
        x=find(x);
        y=find(y);
        if(rank[x]>rank[y]) p[y]=x;
        else{
            p[x]=y;
            if(rank[x]==rank[y]) rank[y]++;
        }
    }
};

class Edge{
    public:
    int source,target,cost;
    Edge(int source=0,int target=0,int cost=0):
        source(source),target(target),cost(cost){}
    bool operator<(const Edge& e)const{
        return cost<e.cost;
    }
};

int kruskal(int N,vector< Edge > edges){
    int totalCost=0;
    sort(edges.begin(),edges.end());
    UnionFind tree=UnionFind(N+1);

    int source,target;
    REP(i,edges.size()){
        Edge e=edges[i];
        if(!tree.same(e.source,e.target)){
            totalCost+=e.cost;
            tree.unite(e.source,e.target);
        }
    }
    return totalCost;
}

int main(){
    int N,M,cost;
    int source,target;

    scanf("%d%d",&N,&M);

    vector< Edge > edges;
    REP(i,M){
        scanf("%d%d%d",&source,&target,&cost);
        edges.push_back(Edge(source,target,cost));
    }

    printf("%d\n",kruskal(N,edges));
    return 0;
}


