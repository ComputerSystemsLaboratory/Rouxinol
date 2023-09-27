#include <bits/stdc++.h>
using namespace std;

const int N=105;
int g[N][N];
int dist[N];
bool vis[N];
int n, ans=0;

void prim(){
    dist[0]=0;
    for(int i=0; i<n; ++i){
        int node=-1;
        for(int j=0; j<n; ++j){
            if(!vis[j] && (node==-1 || dist[j]<dist[node])) node=j;
        }
        if(node==-1) break;
        vis[node]=true;
        ans+=dist[node];
        for(int j=0; j<n; ++j) 
            if(g[node][j]!=-1) dist[j]=min(dist[j], g[node][j]);
    }
}

int main(){
    memset(dist, 0x3f, sizeof dist);
    memset(vis, 0x00, sizeof vis);
    cin>>n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin>>g[i][j];
            
    prim();
    cout<<ans<<endl;
    return 0;
}
