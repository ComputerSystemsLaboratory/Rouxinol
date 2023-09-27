#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define white 0
#define gray 1
#define black 2
const int N=100;
int n,color[N],c[N][N],tt,f[N],d[N];
void dfs_visit(int u){
    color[u]=gray;
    f[u]=++tt;
    for(int v=0;v<n;v++){
        if(c[u][v]==0)continue;
        if(color[v]==white){
            dfs_visit(v);
        }
    }
    color[u]=black;
    d[u]=++tt;
}
void dfs(){
    memset(color,0,sizeof(color));
    memset(f,0,sizeof(f));
    memset(d,0,sizeof(d));
    tt=0;
    for(int u=0;u<n;u++){
        if(color[u]==white)
        dfs_visit(u);
    }
    for(int u=0;u<n;u++)
    {
        cout<<u+1<<" "<<f[u]<<" "<<d[u]<<endl;
    }
}
int main(){
    int u,v,k;
    cin>>n;
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++){
        cin>>u>>k;u--;
        for(int j=0;j<k;j++){
            cin>>v;v--;
            c[u][v]=1;
        }
    }
    dfs();
    return 0;
}
