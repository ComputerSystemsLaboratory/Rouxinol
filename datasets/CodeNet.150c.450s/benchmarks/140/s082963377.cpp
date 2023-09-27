#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
#include <bitset>
#include<math.h>
#include<map>
#include<set>
using namespace std;
typedef long long int ll;


struct UnionFind{
    vector<int> par;
    vector<int> es;
    UnionFind(int N) : par(N,-1),es(N,0) {}
    
    //初期化
    void init(int N){
        par.assign(N,-1);
        es.assign(N,0);
    }

    int find(int x){
        if(par[x]<0) return x;
        else return par[x]=find(par[x]);
    }

    int usize(int x) {return -par[find(x)];}

    int esize(int x) {return es[find(x)];}
    
    bool unite(int x,int y){
        x=find(x);
        y=find(y);
        es[x]++;
        if(x==y) return false;

        if(usize(x)<usize(y)) swap(x,y);
        par[x]+=par[y];
        es[x]+=es[y];
        par[y]=x;
        return true;
    }

    bool same(int x,int y) {return find(x)==find(y);}

};
template<class T >
struct Edge {
  int src, to;
  T cost;

  Edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  Edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

};

template<class T>
T Kruskal(vector<Edge<T>> &edges,int V){
    sort(edges.begin(),edges.end(),[](const Edge<T> &a,const Edge<T> &b){
        return (a.cost<b.cost);
    });
    UnionFind tree(V);
    T ans=0;
    for(auto &e:edges){
        if(tree.unite(e.src,e.to)){
            ans+=e.cost;
        } 
    }
    return ans;
}

signed main(){
    int V,E;
    cin>>V>>E;
    vector<Edge<int>> k;
    for(int i=0;i<E;i++){
        int s,t,w;
        cin>>s>>t>>w;
        k.emplace_back(s,t,w);
    }
    cout<<Kruskal(k,V)<<endl;
}
