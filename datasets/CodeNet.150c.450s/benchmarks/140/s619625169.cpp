#include<bits/stdc++.h>
using namespace std;

using Weight=long long int;

struct Edge{
    int src,dest;
    Weight weight;
    bool operator<(const Edge& rhs){
        return weight<rhs.weight;
    }
};
using Edges=vector<Edge>;
using Graph=vector<Edges>;

class UnionFind {
    int N;
    vector<int> rank;
    vector<int> par;
    public:
    UnionFind(int n):N(n){
        rank.resize(n,0);
        par.resize(n);
        for(int i=0;i<n;i++){
            par[i]=i;
        }
    }

    int find(int x){
        int xx=par[x];
        if(xx==x){
            return x;
        }
        return par[x]=find(xx);
    }

    bool same(int x,int y){
        return find(x)==find(y);
    }

    void unite(int x,int y){
        x=find(x),y=find(y);
        if(rank[x]<rank[y]){
            par[x]=y;
        }
        else{
            if(rank[x]==rank[y]) rank[x]++;
            par[y]=x;
        }
    }

};

Weight kruskal(int V,Edges &edges){
    sort(edges.begin(),edges.end());
    Weight res=0;
    UnionFind uf(V);
    for(auto e:edges){
        if(!uf.same(e.src,e.dest)){
            uf.unite(e.src,e.dest);
            res+=e.weight;
        }
    }
    return res;
}

Weight kruskal(Graph& g){
    Edges edges;
    for(auto es:g){
        edges.reserve(edges.size()+es.size());
        edges.insert(edges.end(),es.begin(),es.end());
    }
    return kruskal(g.size(),edges);
}

int main(){
    int V,E;
    cin>>V>>E;
    Edges edges(E);
    for(int i=0;i<E;i++){
        int s,t;
        Weight w;
        cin>>s>>t>>w;
        edges[i]=Edge{s,t,w};
    }
    cout<<kruskal(V,edges)<<endl;
    return 0;
}