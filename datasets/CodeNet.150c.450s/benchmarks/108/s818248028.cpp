#include<stdio.h>
#include<queue>
using namespace std;
int tu[100][100];
int a[100];
int d[100];
int n;
void bfs(int x){
    queue<int> q;
    q.push(x);
    for(int i=0;i<n;i++)d[i]=10000000;
    d[x]=0;
    int u;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(tu[u][i]==0)continue;
            if(d[i]!=10000000)continue;
            d[i]=d[u]+1;
            q.push(i);
        }
        }
        for(int i=0;i<n;i++){
            printf("%d ",i+1);
            if(d[i]==10000000)printf("-1");
            else printf("%d",d[i]);
            printf("\n");
        }
}
int main(){
    scanf("%d",&n);
    int v,m,k;
    for(int i=0;i<n;i++){
        scanf("%d%d",&v,&m);
        v--;
        for(int j=0;j<m;j++){
            scanf("%d",&k);
            k--;
            tu[v][k]=1;
        }
    }
    bfs(0);
    return 0;
}