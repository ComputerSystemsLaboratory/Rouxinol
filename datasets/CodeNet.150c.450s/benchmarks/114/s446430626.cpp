#include<iostream>
using namespace std;
#define S 100
#define INF 2001
#define WHITE 0;
#define GRAY 1;
#define BLACK 2
int n,a[S][S];

int prim(){
    int u,mina;
    int d[S],p[S],cnd[S];

    for(int i=0;i<n;i++){
        d[i]=INF;
        p[i]=-1;
        cnd[i]=WHITE;
    }

    d[0]=0;
    while(1){
        mina=INF;
        u=-1;
        for(int i=0;i<n;i++){
            if(mina>d[i]&&cnd[i]!=BLACK){
                u=i;
                mina=d[i];
            }
        }
        if(u==-1)break;
        cnd[u]=BLACK;
        for(int v=0;v<n;v++){
            if(cnd[v]!=BLACK&&a[u][v]!=INF){
                if(d[v]>a[u][v]){
                    d[v]=a[u][v];
                    p[v]=u;
                    cnd[v]=GRAY;
                }
            }
        }
    }
            int sum=0;
        for(int i=0;i<n;i++){
            if(p[i]!=-1)sum+=a[i][p[i]];
        }
    return sum;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            if(e==-1)a[i][j]=INF;
            else a[i][j]=e;
        }
    }
    cout<<prim()<<endl;
    return 0;

}
