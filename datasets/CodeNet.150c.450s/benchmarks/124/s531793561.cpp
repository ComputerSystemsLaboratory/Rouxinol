#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
#define fi first
#define se second

const int N=105;
vector<PII> g[N];
int dist[N];
bool vis[N];
int n;

void dijkstra(){
    dist[0]=0;
    priority_queue<PII, vector<PII>, greater<PII>> q;
    q.push({0, 0});
    while(!q.empty()){
        int node=q.top().se;
        q.pop();
        if(vis[node]) continue;
        vis[node]=true;
        for(auto &e: g[node]){
            int v=e.fi;
            int w=e.se;
            if(dist[v]>dist[node]+w){
                dist[v]=dist[node]+w;
                q.push({dist[v], v});
            }
        }
    }
}

int main(){
    memset(dist, 0x3f, sizeof dist);
    memset(vis, 0x00, sizeof vis);
    cin>>n;
    for(int i=0; i<n; ++i){
        int u, k;
        cin>>u>>k;
        for(int j=0; j<k; ++j){
            int v, w;
            cin>>v>>w;
            g[u].push_back({v, w});
        }
    }
    
    dijkstra();
    for(int i=0; i<n; ++i) cout<<i<<" "<<dist[i]<<endl;
    
    return 0;
}
