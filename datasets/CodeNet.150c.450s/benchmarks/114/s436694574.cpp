#include <iostream>
#include <cstring>
#define INF 2000
using namespace std;

int graph[105][105],n,closest[105],color[105],p[105];
int sum=0;
void prim(){
    int i,j;
    while(1){
        int v=-1,minv=INF;
        for(i=0;i<n;i++){
            if(minv>closest[i]&&color[i]!=1){
                minv=closest[i];
                v=i;
            }
        }
        if(v==-1)break;
        color[v]=1;
        closest[v]=INF;
        for(i=0;i<n;i++){
            if(color[i]!=1&&graph[v][i]<closest[i]&&graph[v][i]!=-1){
                closest[i]=graph[v][i];
                p[i]=v;
            }
        }
    }

    for(i=1;i<n;i++){
        if(p[i]!=-1)sum+=graph[i][p[i]];
    }
}

int main()
{
    memset(color,0,sizeof(color));
    memset(graph,-1,sizeof(graph));
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    for(i=0;i<n;i++){
        p[i]=-1;
        closest[i]=INF;
    }
    closest[0]=0;
    prim();
    cout<<sum<<endl;
    return 0;
}