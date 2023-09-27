#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
//_____
#define pb push_back
#define fi first
#define se second
#define mkp make_pair
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i,f,n) for(int i=(f); i<=(n); ++i)
#define outl(x) cout << (x) << '\n'
#define FAST() cin.tie(0), ios::sync_with_stdio(false)
typedef pair<int,int> pii;
//_______

vector <int> G[102];
pii d[102];
int tt;
int N;

void dfs(int u)
{
   d[u].fi = ++tt;
   rep(i, G[u].size()){
      if( d[ G[u][i] ].fi == 0 )dfs( G[u][i] );
   }
   d[u].se = ++tt;
   return ;
}

void slv()
{
   tt = 0;
   reps(i, 1, N)
      if( d[i].fi == 0 ) dfs(i);
   reps(i, 1, N)
      cout << i << ' ' << d[i].fi << ' ' << d[i].se << '\n';
}

signed main()
{
   FAST();
   int u, k, p;

   cin >> N;
   reps(i, 1, N){
      cin >> u >> k;
      while(k--){
         cin >> p;
         G[u].pb(p);
      }
   }

   slv();
   return (0);
}


