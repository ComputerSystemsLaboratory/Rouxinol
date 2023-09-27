#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int dh[4] = {1,0,-1,0};
int dw[4] = {0,1,0,-1};

int main()
{
   int n;
   cin >> n;
   vector<vector<int>>G(n);
   for(int i = 0; i < n; i++)
   {
       int k;
       cin >> k >> k;
       for(int j = 0; j < k; j++)
       {
           int v;
           cin >> v;
           v--;
           G[i].push_back(v);
       }
   }
   vector<int>dist(n,-1);
   dist[0] = 0;
   queue<int>que;
   que.push(0);
   while(!que.empty())
   {
       int v = que.front();
       que.pop();
       for(auto nv: G[v])
       {
           if(dist[nv] != -1) continue;
           dist[nv] = dist[v] + 1;
           que.push(nv);
       }
   }
   for(int i = 0; i < n; i++)
   {
       cout << i+1 << " " << dist[i] << endl;
   }
}
