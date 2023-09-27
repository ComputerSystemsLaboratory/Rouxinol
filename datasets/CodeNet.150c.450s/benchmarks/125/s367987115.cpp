
#include <iostream>
#include <cstdio>
#include <queue>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;


vector<int> G[105];
int d[105];
int f[105];
int tm = 0;
void dfs(int p){
    d[p]=tm;
    rep(i,G[p].size()){
        if(d[G[p][i]]==-1){
            tm++;
            dfs(G[p][i]);
        }
    }
    f[p] = ++tm;
    return;
}
int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    for(int i = 0;i <= n;i++) {
        d[i]=-1;
        f[i]=-1;
    }
    for(int i = 0;i < n;i++){
        int u,k;
        int to;
        scanf("%d %d",&u,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&to);
            G[u].push_back(to);
        }
    }
    for(int i = 1;i <= n;i++){
        if(d[i]==-1){
            tm++;dfs(i);}
        
    }
    for(int i = 1;i <= n;i++){
        printf("%d %d %d\n",i,d[i],f[i]);
    }
}