#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i, s, n) for(int i=(s); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'
using namespace std;

class UnionFind {
private:
   int *par;
   int *rank;
   const size_t N;

public:
   UnionFind(size_t n): N(++n), par(new int[N]), rank(new int[N]) {
      reps(i,0,N) par[i] = i, rank[i] = 0;
   }
   ~UnionFind() {
      delete[] par;
      delete[] rank;
   }
   int root(const int x) {
      if(par[x] != x) par[x] = root( par[x] );
      return (par[x]);
   }

   bool same(const int x, const int y) { return (root(x) == root(y)); }

   //success: 1   failed: 0
   bool unite(int x, int y) {
      x = root(x), y = root(y);
      if(x == y)return (false);
      //link(x, y);
      par[x] = y;
      return (true);
   }

   //void link(const int x, const int y) {
   //   (rank[x] > rank[y]) ? par[y] = x : par[x] = y;
   //   if( rank[x] == rank[y] ) ++rank[y];
   //}
};

signed main()
{
   cin.tie(0), ios::sync_with_stdio(false);
   int N, Q;
   cin >> N >> Q;
   UnionFind S(N);

   while(Q--) {
      int x, y;
      bool com;
      cin >> com >> x >> y;
      if(com == 1)outl( S.same(x,y) );
      else S.unite(x,y);
   }
}


