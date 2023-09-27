#include <cstdio>

void search(int (*A)[101], int *dis, int *found, int n){
    int hoge;
    int time=0;
    for(int k=1;k<n;k++){
        hoge = 1;
        for(int i=1;i<=n;i++){
            if(dis[i]==time){
                for(int j=1;j<=n;j++){
                    if(A[i][j]&&found[j]==0){
                        found[j]=1;
                        dis[j]=time+1;
                        hoge=0;
                    }
                }
            }
        }
        time++;
        if(hoge)return;
    }
}

int main(){
    int i, j, n, u, k, v;
    scanf("%d",&n);
    int found[n+1];
    int dis[n+1];
    dis[1]=0;
    found[1]=1;
    for(i=2;i<=n;i++){
        dis[i]=-1;
        found[i]=0;
    }
    int A[101][101];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            A[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        scanf("%d %d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d",&v);
            A[u][v]=1;
        }
    }
    search(A,dis,found,n);
    for(i=1;i<=n;i++)printf("%d %d\n",i,dis[i]);
    return 0;
}

