//union find tree
#include<vector>
#include<iostream>
#define rep(i,j) for(int i=0;i<(j);i++)
using namespace std;

//Node 0 to n-1??§???1 to n??§???OK
class UnionFind{
public:
  int n;
  vector<int> p;

  UnionFind(int nn):n(nn+1){
      p.resize(n);
      rep(i,n)p[i]=i;
  }

  int root(int x){
    if(p[x] == x) return x;
    else return p[x] = root(p[x]);
  }

  void unite(int x,int y){
      x = root(x), y = root(y);
      if(x != y) p[y]=x;
  }
 
  bool query(int x,int y){
    return root(x) == root(y);
  }

};

int main(){
    int n,q; cin >> n >> q;
    UnionFind ut(n);
    rep(i,q){
        int c ,x,y; cin >> c >> x >> y;
        if(c) cout << ut.query(x,y) << endl;
        else ut.unite(x,y);
    }
    return 0;
}