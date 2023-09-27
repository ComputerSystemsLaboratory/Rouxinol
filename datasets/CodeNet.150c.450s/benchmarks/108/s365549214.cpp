#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <queue>

using namespace std;
static const int N=100;

int n,M[N][N];
int d[N];


void bfs(int s){
    queue<int> Q;
    Q.push(s);
    d[s]=0;
    int u,v;
    while(!Q.empty()){
        u=Q.front();Q.pop();
        for(v=0;v<n;v++){
            if(M[u][v]==0) continue;
            if(d[v]!=-1) continue;
            d[v]=d[u]+1;
            Q.push(v);
        }
    }
    for(int i=0;i<n;i++) printf("%d %d\n",i+1,d[i]);
}

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
    bfs(0);
    return 0;
}

