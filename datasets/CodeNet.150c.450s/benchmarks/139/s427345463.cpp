#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define dsync std::ios::sync_with_stdio(false); std::cin.tie(NULL);
#define pb push_back
#define mp make_pair
typedef long long ll;

//#define foi(a, b) for (LL i = a; a < b ? i < b : b > i; a < b ? i++ : i--)
//#define foj(a, b) for (LL j = a; a < b ? j < b : b > j; a < b ? j++ : j--)

using namespace std;

int main()
{
   dsync;
   int node, edge;
   cin >> node >> edge;
   vector<vector<int>> adj(node + 1);
   for (int i = 1; i <= edge; i++)
   {
      int a, b;
      cin >> a >> b;
      adj[a].pb(b);
      adj[b].pb(a);
   }

   queue<int> q;
   vector<bool> visited(node + 1, false);
   vector<int> distance(node + 1, 0);

   visited[1] = true;
   distance[1] = 0;
   q.push(1);

   while (!q.empty())
   {
      int s = q.front();
      q.pop();

      for (auto u : adj[s])
      {
         if (visited[u])
            continue;

         visited[u] = true;
         distance[u] = s;
         q.push(u);
      }
   }
   for (int x = 2; x <= node; x++)
   {
      if (distance[x] == 0)
      {
         cout << "No" << endl;
         return 0;
      }
   }
   cout << "Yes" << endl;
   for (int x = 2; x <= node; x++)
   {
      cout << distance[x] << endl;
   }
   return 0;
}
