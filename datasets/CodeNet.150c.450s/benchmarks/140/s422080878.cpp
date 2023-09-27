#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <deque>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i=0;i < (int)(n);i++)

class union_find {
public:
vector<int> par,rank,lsize;
union_find(int n): par(n),rank(n),lsize(n){
   for (int i=0;i < n;i++){
      par[i]=i;
      rank[i]=0;
      lsize[i]=1;
   }
}

int find(int x){
   if (par[x]==x){
      return x;
   }
   else{
      return par[x] = find(par[x]); 
   }
}

void unite(int x ,int y){
   x=find(x);
   y=find(y);
   if (x==y) return;
   if (rank[x] < rank[y]){
      lsize[y] += lsize[x];
      lsize[x] = -1;
      par[x] = y;
   }else{
      lsize[x] += lsize[y];
      lsize[y] = -1;
      par[y]=x;
      if (rank[x]==rank[y]) rank[x]++;
   }   
}

bool same(int x, int y){
   return find(x) == find(y);
}

int size(int x){
   if (lsize[x] == -1){
      x=find(x);
   }
   return lsize[x];
}
};

struct edge{int u,v,cost;};

bool comp(const edge &e1, const edge &e2){
    return e1.cost < e2.cost;
}

edge es[100001];
int V,E;

int kruskal(){
    sort(es,es+E,comp);
    union_find tree(V);
    int res = 0;
    for (int i = 0;i < E;i++){
        edge e = es[i];
        if (!tree.same(e.u,e.v)){
            tree.unite(e.u,e.v);
            res += e.cost;
        }
    }
    return res;

}

int main(){
    cin >> V >> E;
    rep(i,E){
        ll a,b,c;
        cin >> a >> b >> c;
        es[i].u = a;
        es[i].v = b;
        es[i].cost = c;
    }
    cout << kruskal() << endl;


   return 0;

}
