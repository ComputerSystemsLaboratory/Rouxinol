#include <stdio.h>
#include <queue>
using namespace std;
struct bfs{
    int n;
    int l;
};
int main(){
    int n,a,m,temp,ans[101];
    bool graph[101][101];
    bfs t,b;
    queue<bfs> q;
    scanf("%d",&n);
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            graph[i][j]=false;
        }
        ans[i]=-1;
    }
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&m);
        for(int j=0;j<m;j++){
            scanf("%d",&temp);
            graph[a][temp]=true;
        }
    }
    t.n=1;
    t.l=0;
    q.push(t);
    while(!q.empty()){
        t=q.front();
        q.pop();
        if(ans[t.n]==-1)ans[t.n]=t.l;
        else continue;
        t.l++;
        b=t;
        for(int i=1;i<=n;i++){
            if(graph[t.n][i]){
                b.n=i;
                q.push(b);
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d %d\n",i,ans[i]);
    }
}