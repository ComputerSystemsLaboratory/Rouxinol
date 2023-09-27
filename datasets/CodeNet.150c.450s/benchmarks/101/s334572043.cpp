#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int inf = 1000000000;

class UF{
public:
  vector<int> u;
  vector<int> r;

  void init(int n){
    u.resize(n, 0);
    r.resize(n, 0);
    for(int i=0; i<n; i++) u[i] = i;
  }
  int root(int x){
    // if( u[x] == x ) return x;
    // else return root(u[x]);
    return u[x] == x ? x : u[x] = root(u[x]);
  }
  bool same(int x, int y){
    return root(x) == root(y);
  }
  void unite(int x, int y){
    x = root(x);
    y = root(y);
    if( x == y ) return;

    if( r[x] < r[y] ){
      u[x] = y;
    }else{
      u[y] = x;
      if( r[x] == r[y] ) r[x]++;
    }
  }
};

int main(void) {

  int n, m;
  cin >> n >> m;
  UF uf;
  uf.init(n);
  int s, t;
  for(int i=0; i<m; i++){
    scanf("%d %d", &s, &t);
    uf.unite(s, t);
  }
  int q;
  cin >> q;
  for(int i=0; i<q; i++){
    scanf("%d %d", &s, &t);
    cout << ( uf.same(s, t) ? "yes" : "no" ) << endl;
  }



  return 0;
}

// EOF