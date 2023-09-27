#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
bool visited[100001];
int ans[100001];
 
void bfs(){
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while(q.size()){
        int cur = q.front(); q.pop();
        for(auto i : adj[cur]){
            if(!visited[i]){
                ans[i] = cur;
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
	memset(visited,false,sizeof(visited));
	memset(ans,0,sizeof(ans));
	int nodes,edges;
	cin >> nodes >> edges;
	for(int i=0;i<edges;i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs();
	cout << "Yes\n";
	for(int i=2;i<=nodes;i++)
		cout << ans[i] << "\n";
}