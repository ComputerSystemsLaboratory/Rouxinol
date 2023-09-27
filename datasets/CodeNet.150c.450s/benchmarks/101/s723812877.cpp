#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(ll i=0;i<N;++i)
typedef long long int ll;
ll INF = 1LL<<60;

ll n,m;

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

int main(){
    cin >> n >> m;
    UnionFind tree(n);
    rep(i,m){
        int x,y; cin >> x >> y;
        tree.unite(x,y);
    }
    int q; cin >> q;
    rep(i,q){
        int x,y; cin >> x >> y;
        if(tree.find(x) != -1 && tree.find(y) != -1){
            if(tree.find(x) == tree.find(y)) cout << "yes" << endl;
            else cout << "no" << endl;
        }else cout << "no" << endl;
    }
}
