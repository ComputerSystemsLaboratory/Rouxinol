#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct Kruskal{
    struct edge{
        int from,to,used; T cost;
        edge(int from,int to,T cost):
            from(from),to(to),cost(cost),used(0){}
        bool operator<(const edge &e) const{
            if (cost!=e.cost) return cost<e.cost;
            else if (from!=e.from) return from<e.from;
            else return to<e.to;
        }
    };
    int num;
    vector<int> par,rank;
    vector<edge> es;
    Kruskal(int n):num(n),par(n),rank(n,1){
        iota(par.begin(),par.end(),0);
    }
    int root(int x){
        if (par[x]==x) return x;
        return par[x]=root(par[x]);
    }
    bool merge(int x, int y){
        x=root(x),y=root(y);
        if (x==y) return false;
        if (rank[x]<rank[y]) swap(x,y);
        par[y]=x;
        rank[x]+=rank[y];
        --num;
        return true;
    }
    bool same(int x, int y){return root(x)==root(y);}
    int size(int x){return rank[root(x)];}
    int count(){return num;}
    void add_edge(int u,int v,T c){
        es.emplace_back(u,v,c);
    }
    T build(){
        sort(es.begin(),es.end());
        T res=0;
        for (auto &e:es){
            if (!same(e.from,e.to)){
                res+=e.cost;
                merge(e.from,e.to);
                e.used=1;
            }
        }
        return res;
    }
    vector<int> used_es(T &c){
        int E=es.size();
        map<edge,int> m;
        for (int i=0;i<E;++i) m[es[i]]=i;
        c=build();
        vector<int> list(E);
        for (int i=0;i<E;++i) list[m[es[i]]]=es[i].used;
        return list;
    }
};

// https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_12_A

void ALDS1_12_A(){
    int n; cin >> n;
    Kruskal<int> K(n);
    vector<vector<int>> a(n,vector<int>(n));
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin >> a[i][j];
            if (j>i&&~a[i][j]) K.add_edge(i,j,a[i][j]);
        }
    }
    cout << K.build() << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ALDS1_12_A();
}
