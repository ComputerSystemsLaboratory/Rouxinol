#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
#include <utility>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i, s, n) for(int i=(s); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'
#define fi first
#define se second
#define mkp make_pair

#define INF 0x3f3f3f3f
#define NIL -1
using namespace std;

int N;
vector <int> G[102];
int far[102];

void slv()
{
   queue <int> que;
   que.push(1);
   memset( far, NIL, sizeof(far) );
   far[1] = 0;

   while(!que.empty()){
      const int u = que.front();
      que.pop();
      rep(i, G[u].size()){
         const int next = G[u][i];
         if( far[next] == NIL ){
            far[next] = far[u] + 1;
            que.push( next );
         }
      }
   }

   reps(i, 1, N)
      cout << i <<  ' ' <<  far[i]  << '\n';
   return;
}

signed main()
{
   cin.tie(0), ios::sync_with_stdio(false);
   cin >> N;

   reps(i, 1, N){
      int u, k, a;
      cin >> u >> k;
      while(k--){
         cin >> a;
         G[u].push_back(a);
      }
   }

   slv();
   return (0);
}


