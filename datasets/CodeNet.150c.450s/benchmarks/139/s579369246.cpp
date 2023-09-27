#include<bits/stdc++.h>
using namespace std;
struct xy{
int x;int y;
};
int main(){
int n,m;cin >> n >> m;
vector<bool>vis(n,0);
queue<xy>q;
vector<vector<int>> adj(n);
vector<int>ans(n);
for(int i = 0;i<m;i++){
    int v,u;cin >> v >> u;
    v--;u--;
    adj[v].push_back(u);
    adj[u].push_back(v);
}
for(int i = 0;i<adj[0].size();i++) q.push({adj[0][i],0});
//vis[0] = 1;
while(!q.empty()){
    xy temp = q.front();q.pop();
    int v = temp.x;int u  = temp.y;
    if(vis[v]) continue;
    vis[v] = 1;
    ans[v] = u;
    for(int i = 0;i<adj[v].size();i++) q.push({adj[v][i],v});
}
cout <<"Yes"<<endl;
for(int i = 1;i<n;i++) cout << ans[i]+1<<endl;
return 0;
}
