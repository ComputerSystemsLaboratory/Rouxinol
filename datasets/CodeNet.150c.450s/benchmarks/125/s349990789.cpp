#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <stack>

using namespace std;
static const int N=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,M[N][N];
int d[N], color[N],f[N],tt;

void dfs_visit(int u){
    int v;
    d[u]=++tt;
    color[u]=GRAY;
    for(v=0;v<n;v++){
        if (M[u][v]==0){continue;}
        if(color[v]==WHITE)dfs_visit(v);
    }
    color[v]=BLACK;
    f[u]=++tt;
}

void dfs(){
    int u;
    tt=0;
    for (u=0;u<n;u++)color[u]=WHITE;

    for (u=0;u<n;u++){
        if(color[u]==WHITE) dfs_visit(u);
    }
    for (u=0;u<n;u++){
        printf("%d %d %d\n",u+1,d[u],f[u]);
    }
};

int main()
{
    int u,k,v;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) M[i][j]=0;
    }
    for(int i=0;i<n;i++){
        cin>>u>>k;
        u--;
        for(int j=0;j<k;j++){
            cin>>v;
            v--;
            M[u][v]=1;
        }
    }
    for(int i=0;i<n;i++) d[i]=-1;
    dfs();
    return 0;
}
