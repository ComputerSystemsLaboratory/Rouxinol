#include<bits/stdc++.h>
using namespace std;
#define pb push_back 
signed main()
{
  	int n,m ; cin>>n>>m;
  	vector<int>adj[n+1];
  	for(int i = 0 ; i < m ;i++)
    {
    	int u , v;cin>>u>>v;
      	adj[u].pb(v);
      	adj[v].pb(u);
    }
  	
  	vector<int>dis(n+1,INT_MAX);
  	vector<int>par(n+1);
  	vector<int>vis(n+1);
  	priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>>pq;
  	pq.push({0,1});
  	dis[1] = 0; 
  	while(!pq.empty())
    {
    	int cost = pq.top().first;
      	int tp = pq.top().second;
      	pq.pop();
      	vis[tp] = 1;
      	for(auto it : adj[tp])
        {	
          if(dis[it] > dis[tp] + 1) 
          {
          	dis[it] = dis[tp] +1 ;
            par[it] = tp;
            pq.push({dis[tp] + 1 ,it});
          }
        }
    }
  	for(int i = 2 ; i <=n ;i++ )
    { if(vis[i] != 1  ) { cout<<"No"<<endl; return 0 ;}  }
  	cout<<"Yes"<<endl;
  	for(int i = 2 ; i <=n ;i++)
      cout<<par[i]<<endl;

}