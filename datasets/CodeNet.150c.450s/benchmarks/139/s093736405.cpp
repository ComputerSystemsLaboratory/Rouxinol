#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
vector<vector<int>> G(100030);

int main()
{
   int n,m;
   cin >> n >> m;
   for(int i=0;i<m;++i)
   {
      int x,y;
      cin >> x >> y;
      G[x].push_back(y);
      G[y].push_back(x);
   }
   int level[100030]={};
   queue<int> Q;
   Q.push(1);
   while(Q.size()){
      int v = Q.front();
      Q.pop();
      for(auto i:G[v]){
            if(level[i]==0)
            {
               Q.push(i);
               level[i]=v;
            }
         }
   }
   cout<<"Yes\n";
   for(int i=2;i<=n;++i)
      cout<<level[i]<<'\n';
}
