
#include<bits/stdc++.h>

using namespace std;

const int maxn=1e2+5;
const int inf=(1<<21);

int n,m[maxn][maxn];
int d[maxn];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    for(int i=0;i<n;i++){
        d[i]=inf;
    }
    d[s]=0;
    int u;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v=0;v<n;v++){
            if(m[u][v]==0){
                continue;
            }
            if(d[v]!=inf){
                continue;
            }
            d[v]=d[u]+1;
            q.push(v);
        }
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<((d[i]==inf)?(-1):d[i])<<endl;
    }
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=0;
        }
    }
    int u,k,v;
    for(int i=0;i<n;i++){
        cin>>u>>k;
        u--;
        for(int j=0;j<k;j++){
            cin>>v;
            v--;
            m[u][v]=1;
        }
    }
    bfs(0);
    return 0;
}
/*
4
1 2 2 4
2 1 4
3 0
4 1 3
*/

