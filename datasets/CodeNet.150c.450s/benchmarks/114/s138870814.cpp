#include <bits/stdc++.h>
using namespace std;
static const int MAX=100;
static const int INFTY=(1<<21);
static const int WHITE=0;
static const int BLACK=1;

int n,M[MAX][MAX];

int prim(){
    int color[n],d[n],p[n];
    for(int i=0;i<n;i++){
        p[i]=-1;
        color[i]=WHITE;
        d[i]=INFTY;
    }

    d[0]=0;
    while(true){
    int minv=INFTY,u=-1;

    for(int i=0;i<n;i++){
        if(color[i]==WHITE&&minv>d[i]){minv=d[i];u=i;}
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(int i=0;i<n;i++){
        if(color[i]==WHITE&&M[u][i]!=INFTY){
            if(d[i]>M[u][i]){
                d[i]=M[u][i];
                p[i]=u;
            }
        }
    }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(p[i]!=-1)sum+=M[i][p[i]];
    }
    return sum;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int e;scanf("%d",&e);
            M[i][j]=(e==-1)?INFTY:e;
        }
    }

    cout<<prim()<<endl;
    return 0;
}
