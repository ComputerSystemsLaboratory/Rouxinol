#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>adj[n+1];
	vector<int>visited(n+1);
	vector<int>dist(n+1,-1);
	for(int i=1; i<=m; i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dist[1]=0;
	queue<int>q;
	q.push(1);
	visited[1]=1;
	while(!q.empty())
	{
		int node=q.front();
	    q.pop();
	    for(auto var : adj[node])
	    {
	    	if(!visited[var])
	    	{
	    		dist[var]=1+dist[node];
	    		visited[var]=1;
	    		q.push(var);
			}
		}
	}
	int num=*min_element(dist.begin()+1,dist.end());
	if(num==-1)
	 cout<<"No";
	else
	{
		cout<<"Yes\n";
		for(int i=2; i<=n; i++)
		{
			int mn=1000000;
			int ans;
			for(auto var : adj[i])
			{
				if(dist[var]<mn)
				{
					ans=var;
					mn=dist[var];
				}
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
	
}