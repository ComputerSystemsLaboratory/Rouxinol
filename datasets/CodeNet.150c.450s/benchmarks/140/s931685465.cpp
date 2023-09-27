#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#ifndef MY_ALGORITHM
template<typename T>
struct UnionFind
{
    vector<T> parents;
    vector<T> rank;
    UnionFind(T n);
    T root(T x);
    bool unite(T x, T y);
    bool same(T x, T y);
};
#endif

template<typename T>
UnionFind<T>::UnionFind(T n):parents(n),rank(n,0){
        for (T i=0;i<n;i++){
            parents[i] = i;
        }
    }


template<typename T>
T UnionFind<T>::root(T x){
        //再帰的に根をつけなおす//rootを返す
        return parents[x] == x ? x: parents[x] = root(parents[x]);
}

template<typename T>
bool UnionFind<T>::unite(T x, T y){
        if (x==y) return false;
        x = root(x); y = root(y);
        if (x == y) return false;
        if (rank[x] < rank[y]) swap(x, y);
        if (rank[x] == rank[y]) ++rank[x];
        parents[y] = x;
        return true;
}

template<typename T>
bool UnionFind<T>::same(T x, T y){
        if (x==y) return true;
        return root(x) == root(y);
}
template<typename NodeIdx, typename Cost>
Cost kruskal(vector<tuple<NodeIdx,NodeIdx,Cost>> graph, NodeIdx V, NodeIdx E){
    using Edge =  tuple<NodeIdx,NodeIdx,Cost>;
    auto comp = [ ](const Edge &e1,const Edge &e2){
        return get<2>(e1) < get<2>(e2);
    };
    sort(graph.begin(),graph.end(),comp);
    UnionFind<NodeIdx> uf(V);
    Cost res = 0;
    for (const auto e: graph){
        if (!uf.same(get<0>(e),get<1>(e))){
            uf.unite(get<0>(e),get<1>(e));
            res +=get<2>(e);
        }

    }
    return res;



}


int main(){
    vector<tuple<ll,ll,ll>> graph;
    ll N,E;
    cin >> N >> E;
    for (ll i=0;i<E;i++){
        ll v1,v2,c;
        cin >> v1 >> v2 >> c;
        graph.push_back(make_tuple(v1,v2,c));
    }
    ll ret = kruskal(graph,N,E);

    printf("%lld\n",ret);
}
