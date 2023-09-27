#include<stdio.h>
#include<iostream>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[N][N];
int color[N],d[N],f[N],tt;

void dfs_visit(int u){
    int v;
    color[u]=GRAY;
    d[u]=++tt; //最初の訪問
    for(v=0; v<n; v++){
        if(M[u][v]==0){ continue; }
        if(color[v]==WHITE){ dfs_visit(v); } 
    }
    color[u]=BLACK;
    f[u]=++tt;//訪問の完了
}

void dfs(){
    int u;
    //初期化
    for(u=0; u<n; u++){ 
        color[u]=WHITE; 
    }

    tt=0;

    for(u=0; u<n; u++){
        //未訪問のuを始点として深さ優先探索
        if(color[u]==WHITE){ dfs_visit(u); }
    }

    for(u=0; u<n; u++){
        printf("%d %d %d\n",u+1,d[u],f[u]);
    }
}

int main(){
    int u,v,k,i,j;

    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            M[i][j]=0;
        }
    }

    for(i=0; i<n; i++){
        scanf("%d %d",&u,&k);
        u--;
        for(j=0; j<k; j++){
            scanf("%d",&v);
            v--;
            M[u][v]=1;
        }
    }

    dfs();

    return 0;
}
