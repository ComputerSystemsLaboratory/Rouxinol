
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<queue>


int n;
int a[105][105];
std::queue<int>S;
int dis[105];
int color[105];

void bfs(int k){
    int i;
    for(i=1;i<=n;i++){
        if(i!=k&& a[k][i]==1 &&color[i]==0){
            S.push(i);
            dis[i]=dis[k]+1;
            color[i]=1;
        }
    }
}


int main(){
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)for(j=1;j<=n;j++)a[i][j]=0;
    for(i=1;i<=n;i++){
        int p,k,q;
        scanf("%d %d",&p ,&k);
        for(j=1;j<=k;j++){
            scanf("%d",&q);
            a[p][q]=1;
        }
    }
    for(i=1;i<=n;i++)dis[i]=-1;
    dis[1]=0;
    for(i=1;i<=n;i++)color[i]=0;//0???????¨????
    S.push(1);
    color[1]=1;
    while(!S.empty()){
        int front=S.front();
        S.pop();
        bfs(front);
    }
    for(i=1;i<=n;i++){
        printf("%d %d\n",i,dis[i]);
    }
    return 0;
}