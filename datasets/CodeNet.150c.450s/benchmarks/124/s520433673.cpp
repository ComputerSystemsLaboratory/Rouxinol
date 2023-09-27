#include<iostream>
using namespace std;
#define S 100
#define INF 1000000
#define WHITE 0;
#define GRAY 1;
#define BLACK 2

int n,a[S][S];

void dijkstra(){
    int minv;
    int d[S],cnd[S];
    int i,v;
    for(i=0;i<n;i++){
        d[i]=INF;
        cnd[i]=WHITE;
    }

    d[0]=0;
    cnd[0]=GRAY;

    while(1){
        minv=INF;
        int u=-1;
        for(i=0;i<n;i++){
            if(minv>d[i]&&cnd[i]!=BLACK){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1)break;
        cnd[u]=BLACK;
        for(int v=0;v<n;v++){
            if(cnd[v]!=BLACK && a[u][v]!=INF){
                if(d[v]>d[u]+a[u][v]){
                    d[v]=d[u]+a[u][v];
                    cnd[v]=GRAY;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
            cout<<i<<" "<<(d[i]==INF?-1:d[i])<<endl;
    }
}

int main(){
    int i,j,v;
    int k,c,u;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        a[i][j]=INF;
    }
    for(i=0;i<n;i++){
        cin>>u>>k;
        for(j=0;j<k;j++){
            cin>>v>>c;
            a[u][v]=c;
        }
    }
    dijkstra();
    return 0;
}
