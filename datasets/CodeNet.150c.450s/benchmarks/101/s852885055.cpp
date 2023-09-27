#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//_____
#define pb push_back
#define mkp make_pair
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i,f,n) for(int i=(f); i<=(n); ++i)
#define outl(x) cout << (x) << '\n'
#define FAST() cin.tie(0), ios::sync_with_stdio(false)
//_______

vector <int> G[100005];
int group[100005];
int color = 1;

void dfs(int u)
{
   group[u] = color;

   rep(i, G[u].size())
      if( group[ G[u][i] ] == 0 )dfs( G[u][i] );
}

signed main()
{
   FAST();
   int N, M;
   cin >> N >> M;

   rep(i, M){
      int a,b;
      cin >> a >> b;
      G[a].pb(b);
      G[b].pb(a);
   }

   rep(i, N){
      if(group[i] == 0 )dfs(i);
      ++color;
   }

   int Q;
   cin >> Q;
   while(Q--){
      int a,b;
      cin >> a >> b;
      outl( group[a] == group[b] ? "yes" : "no" );
   }
}


