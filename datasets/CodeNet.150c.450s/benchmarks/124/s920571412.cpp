#include <bits/stdc++.h>
using namespace std;
static const int MAX=100;
static const int INFTY=1000000000;
static const int WHITE=-1;
static const int BLACK=1;

int A[MAX][MAX],dk[MAX],p[MAX];

void SSSP(int n){
    int C[n];
    for(int i=0;i<n;i++){
        C[i]=WHITE;
        dk[i]=INFTY;
    }
    dk[0]=0;
    while(true){
        int u=-1;int minv=INFTY;
        for(int i=0;i<n;i++){
            if(C[i]==WHITE&&minv>dk[i]){
                minv=dk[i];
                u=i;
            }
        }
        if(u==-1)break;
        C[u]=BLACK;
        for(int i=0;i<n;i++){
            if(C[i]==WHITE&&A[u][i]!=INFTY){
                if(dk[i]>dk[u]+A[u][i]){
                    dk[i]=dk[u]+A[u][i];
                }
            }
        }
    }
}

int main(){
    int n,v,k,u,d;
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)A[i][j]=INFTY;

    for(int i=0;i<n;i++){
        scanf("%d %d",&v,&k);
        for(int j=0;j<k;j++){
            scanf("%d %d",&u,&d);
            A[v][u]=d;
        }
    }
    SSSP(n);
    for(int i=0;i<n;i++){
        printf("%d %d\n",i,dk[i]);
    }

}
