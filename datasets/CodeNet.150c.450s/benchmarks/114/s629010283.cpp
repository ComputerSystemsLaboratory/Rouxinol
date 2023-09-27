#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
#define rep(i,n) for(int i=0;i<(int)n;i++)
const int INF = 1e9;

struct edge{ int u,v,cost;};
vector<edge> E;
int n;

struct UnionFind {
  vector< int > data;
 
  UnionFind(int sz) {
    data.assign(sz, -1);
  }
 
  bool unite(int x, int y) {
    x = find(x), y = find(y);
    if(x == y) return (false);
    if(data[x] > data[y]) swap(x, y);
    data[x] += data[y];
    data[y] = x;
    return (true);
  }
 
  int find(int k) {
    if(data[k] < 0) return (k);
    return (data[k] = find(data[k]));
  }
 
  int size(int k) {
    return (-data[find(k)]);
  }
};


bool comp(const edge& e, edge& f){
    return e.cost < f.cost;
}


int main(){
    cin >> n;
    rep(i,n){
        rep(j,n){
            int c ; cin >> c;
            if(c!=-1){
                edge e = {i,j,c};
                E.push_back(e);
            }
        }
    }
    UnionFind T(n);
    sort(E.begin(),E.end(),comp);
    ll res = 0;
    rep(i,E.size()){
        edge e = E[i];
        if(T.find(e.u)!=T.find(e.v)) {
            T.unite(e.u,e.v);
            res+=e.cost;
        }
    }
    cout << res << endl;
}
