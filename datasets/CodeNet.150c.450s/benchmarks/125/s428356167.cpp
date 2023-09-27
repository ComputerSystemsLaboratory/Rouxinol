#include <stdio.h>
int d[101],e[101],t=0,n;
bool went[101],graph[101][101];
void dfs(int x){
    if(went[x])return;
    went[x]=true;
    t++;
    d[x]=t;
    for(int i=1;i<=n;i++){if(graph[x][i])dfs(i);}
    t++;
    e[x]=t;
    return;
}
int main(){
    int m,temp,a;
    scanf("%d",&n);
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++)graph[i][j]=false;
        went[i]=false;
    }
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&m);
        for(int j=0;j<m;j++){
            scanf("%d",&temp);
            graph[a][temp]=true;
        }
    }
    for(int i=1;i<=n;i++)dfs(i);
    for(int i=1;i<=n;i++)printf("%d %d %d\n",i,d[i],e[i]);
}