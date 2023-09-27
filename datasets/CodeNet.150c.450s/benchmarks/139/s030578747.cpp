#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> vis(N,0);
vector<int> par(N,0);
vector<int> adj[N];
#define pb push_back
int u,v,n,m;
void solve(){
        queue<int>q;
        q.push(1);
        vis[1]=1;
        while(!q.empty()){
                int u=q.front(); q.pop();
                for(int i: adj[u]){
                        if(!vis[i]){vis[i]=1; par[i]=u; q.push(i); }
                }
        }
        for(int i=1;i<=n;i++){
                if(!vis[i]) { cout<<"No"<<endl; return ; }
        }
        cout<<"Yes"<<endl;
        for(int i=2;i<=n;i++) cout<<par[i]<<endl;
}

int main(){
        cin>>n>>m;
        for(int i=1;i<=m;i++) { cin>>u>>v; adj[u].pb(v); adj[v].pb(u); }
        solve();
}
