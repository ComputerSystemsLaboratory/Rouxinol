#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX 100
#define Black 1
#define White 0

int f[MAX];
int adj[MAX][MAX];
int n;

void bfs(int r){
    rep(i,n)f[i]=-1;
    queue<int> Q;
    Q.push(r);
    f[r]=0;
    while(!Q.empty()){
        int u=Q.front();Q.pop();
        rep(i,n){
            if(adj[u][i]==1&&f[i]==-1){
                f[i]=f[u]+1;
                Q.push(i);
            }
        }
    }
    rep(i,n){
        printf("%d %d\n",i+1,f[i]);
    }
}

int main(){
    int id,k,node;
    cin>>n;
    rep(i,n)rep(j,n)adj[i][j]=0;
    rep(i,n){
        scanf("%d %d",&id,&k);
        id--;
        rep(j,k){
            scanf("%d",&node);
            node--;
            adj[id][node]=1;
        }
    }
    bfs(0);
    return 0;
}

