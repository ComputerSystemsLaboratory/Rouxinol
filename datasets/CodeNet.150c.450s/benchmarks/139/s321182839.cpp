/*-In the name of God-
 
Author : Syed Mujtaba
Seek knowledge from the Cradle to the Grave !!
https://www.linkedin.com/in/syed-mujtaba
*/

#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define ld              long double
#define ll              long long
#define pb              push_back
#define fi              first
#define se              second
#define MAXN            200064
#define mod             1000000007  //998244353 // 1e9 + 7
#define MAX             8000000000000000064LL
#define MIN            -8000000000000000064LL
#define mt              make_tuple
#define eps             1e-6
#define endl            '\n'
#define test            int T_T; cin>>T_T; while(T_T--)
#define fast_io         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
   int n, m;
   cin >> n >> m;
   vector < int > adj[n + 4];
   int u, v;
   for(int i = 0; i < m; i++)
   {
      cin >> u >> v;
      adj[u].pb(v);
      adj[v].pb(u);
   }
   bool vis[n + 4];
   int par[n + 4];
   memset(vis, false, sizeof(vis));
   vis[1] = true;
   queue < pair < int, int > > q;
   q.push({1, 0});
   while(!q.empty())
   {
      int x, y;
      tie(x, y) = q.front();
      q.pop();
      par[x] = y;
      for(auto z : adj[x]){
         if(!vis[z]){
            vis[z] = true;
            q.push({z, x});
         }
      }
   }
   bool floofs = true;
   for(int i = 1; i <= n; i++)
   {
      if(!vis[i]){
         floofs = false;
         break;
      }
   }
   if(floofs){
      cout << "Yes\n";
      for(int i = 2; i <= n; i++){
         cout << par[i] << endl;
      }
   }
   else{
      cout << "No\n";
   }
}