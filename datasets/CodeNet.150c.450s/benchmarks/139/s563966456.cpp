#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int >visited(n,-1);
    vector<vector<int > >adj(n);
    for(int i=0,a,b;i<m;i++){
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    queue<int >q;
    visited[0]=0;
    q.push(0);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0,v;i<adj[u].size();i++){
            v = adj[u][i];
            if(visited[v]==-1){
                visited[v]=u;
                q.push(v);
            }
        }
    }
    for(int i=1;i<n;i++)if(visited[i]==-1){cout<<"No";return 0;}
    cout<<"Yes\n";
    for(int i=1;i<n;i++)cout<<visited[i]+1<<'\n';
}