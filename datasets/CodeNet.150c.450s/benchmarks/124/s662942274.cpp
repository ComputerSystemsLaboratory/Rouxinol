#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
const int inf=0x3f3f3f3f;
const int maxn=109;
int map1[maxn][maxn];
int flag[maxn];
int vis[maxn];
int c[maxn];

void spfa(int u,int n){
    queue<int>q;
    memset(flag,0,sizeof(flag));
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++)
        vis[i]=inf;
    vis[0]=0;c[0]=1,flag[0]=1;
    q.push(0);
    while(!q.empty()){
        int now=q.front();
        q.pop();
        flag[now]=0;
        for(int i=0;i<n;i++){
            if(vis[i]>vis[now]+map1[now][i]){
                vis[i]=vis[now]+map1[now][i];
                if(!flag[i]){
                    flag[i]=1;
                    q.push(i);
                }

            }
        }
    }
}

int main(){
    int n,u,v,w,k;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(i==j)
                    map1[i][j]=0;
                else
                    map1[i][j]=inf;
        for(int i=0;i<n;i++){
            scanf("%d%d",&u,&k);
            for(int j=0;j<k;j++){
                scanf("%d%d",&v,&w);
                if(map1[u][v]>w)
                    map1[u][v]=w;
            }
        }
        spfa(0,n);
        for(int i=0;i<n;i++)
            printf("%d %d\n",i,vis[i]);
    }
    return 0;
}



