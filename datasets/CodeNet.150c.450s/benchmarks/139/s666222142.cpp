#include <bits/stdc++.h>
using namespace std;
#define N 200005
vector<vector<int> > adj(N);
vector<int> p;
vector<bool> visited;
int main()
{
    int n, m;
    cin>>n>>m;
    p.assign(N, -1);
    visited.assign(N, false);
    for (int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for (int i = 0; i<adj[u].size(); i++){
            int v = adj[u][i];
            if (visited[v] == false){
                visited[v] = true;
                p[v] = u;
                q.push(v);
            }
        }
    }
    cout<<"Yes"<<endl;
    for (int i=2; i<=n; i++)cout<<p[i]<<endl;
}