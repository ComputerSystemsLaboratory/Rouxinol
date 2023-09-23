#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
using namespace std;

bool G[105][105];

signed main()
{
   cin.tie(0), ios::sync_with_stdio(false);
   int N;
   cin >> N;

   rep(i, N){
      int k, u, p;
      cin >> u >> k;
      --u;

      rep(j, k){
         cin >> p;
         --p;
         G[u][p] = true;
      }
   }

   rep(i, N){
      rep(j, N){
         cout << G[i][j] << ((j+1 < N)? ' ' : '\n') ;
      }
   }

}


