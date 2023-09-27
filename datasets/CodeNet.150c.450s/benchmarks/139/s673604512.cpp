#include<bits/stdc++.h>
using namespace std;
#define int long long int
int n,m,x,y,par[100005];
vector<int> g[100005];
bool vis[100005];
void bfs(int node){
	vis[node] = 1;
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(auto v:g[u])
		{
			if(vis[v]) continue;	
			par[v] = u;
			vis[v] = 1;
			q.push(v);
		}
	}
}
signed main(){
    int t = 1; //cin >> t;
    while(t--){
    	cin >> n >> m;
    	for (int i = 0; i < m; ++i)
    	{
    		cin >> x >> y;
    		g[x].push_back(y);
    		g[y].push_back(x);
    	}
    	memset(par,-1,sizeof(par));
    	bfs(1);
    	for(int i = 2; i <= n; i++)
    		if(par[i] == -1)
    		{
    			cout << "No";
    			return 0;
    		}
    	cout << "Yes\n";
    	for(int i = 2; i <= n; i++)
    		cout << par[i] << "\n";
    }    
}