#include<iostream>
#include<queue>
using namespace std;
static const int N=100;
static const int INFTY=2000000000;
int n,M[N+1][N+1];
int d[N+1];
void bfs(int s){
    queue<int> q;
    q.push(s);
    for(int i=1;i<=n;i++)d[i]=INFTY;
    d[s]=0;
    int u;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v=1;v<=n;v++){
            if(M[u][v]==0)continue;
            if(d[v]!=INFTY)continue;
            d[v]=d[u]+1;
            q.push(v);
        }
    }
    for(int i=1;i<=n;i++)
        cout<<i<<" "<<((d[i]==INFTY)?-1:d[i])<<"\n";

}

int main(){
    int u,k,v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>u>>k;
        for(int j=1;j<=k;j++){
            cin>>v;
            M[u][v]=1;
        }
    }
    bfs(1);
    return 0;
}
