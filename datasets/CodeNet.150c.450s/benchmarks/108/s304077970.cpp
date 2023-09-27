#include<iostream>
#include<queue>
using namespace std;

static const int N=100;
static const int WHITE=0;
static const int GRAY=1;

int n,M[N][N],color[N];
int d[N];
void bfs(int s){
    queue<int> q;
    for(int i=0;i<n;i++){
        d[i]=0;
        color[i]=WHITE;
    }
    color[s]=GRAY;
    q.push(s);
    int u;
    while(!q.empty()){
        u=q.front();q.pop();
        for(int v=0;v<n;v++){
            if(M[u][v]==0)continue;
            if(color[v]==WHITE){
                d[v]=d[u]+1;
                color[v]=GRAY;
                q.push(v);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i==0)
            cout<<i+1<<" " <<"0"<<endl;
        else
            cout<<i+1<<" "<<((d[i]==0)?(-1):d[i])<<endl;
    }
}
int main()
{
    int u,v,k,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            M[i][j]=0;
        }
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        u--;
        for(j=0;j<k;j++){
            scanf("%d",&v);
            v--;
            M[u][v]=1;
        }


    }
    bfs(0);
}
