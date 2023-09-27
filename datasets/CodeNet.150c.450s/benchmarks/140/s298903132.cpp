#include<bits/stdc++.h>
using namespace std;
#define INFTY 1<<20
typedef long long int ll;
const int MOD=1000000007;

struct  edge
{
    int u;
    int v;
    int cost;
};
edge es[100010];
int E,V;

struct UnionFind{
    vector<int> d;//d[i]:iの親の番号。根なら木のサイズ*(-1)
    UnionFind(int n=0):d(n,-1){}//全ての木のサイズが１と初期.n点
    
    int find(int x){//根を返す
    if(d[x] < 0) return x;//xが根の時はxを返す
    return d[x] = find(d[x]);
    }

    bool unite(int x,int y){//xとyの木をつなげたらtrue.大きい方に小さい方をつなげる.
    x = find(x);y = find(y);//根を求める
    if(x==y) return false;//同じ木に属していたらつなげる必要なし
    if(d[x]>d[y]) swap(x,y);//yの方がサイズが大きい時は交換する
    d[x] += d[y];//サイズの更新
    d[y] = x;//根の更新
    return true;
    }

    bool same(int x,int y){return find(x)==find(y);}//xとyが同じ木にあるか

    int size(int x){return -d[find(x)];}//xの木のサイズを返す
};
bool comp(const edge& e1,const edge& e2){
    return e1.cost < e2.cost;
}
int kruskal(){
    sort(es,es+E,comp);//edgecostの小さい順
    UnionFind uf(V);
    int res = 0;
    for (int i = 0; i < E; i++)
    {
        edge e = es[i];
        
        if(!uf.same(e.u,e.v)){
            res += e.cost;
            uf.unite(e.u,e.v);
        }
    }
    return res;
}
int main(){
    cin>>V>>E;
    for (int i = 0; i < E; i++)
    {
        int s,t,w;
        cin>>s>>t>>w;
        edge e = {s,t,w};
        es[i] = e;
    }
    int ans=kruskal();
  
    cout<<ans<<endl;
    return 0;
}
