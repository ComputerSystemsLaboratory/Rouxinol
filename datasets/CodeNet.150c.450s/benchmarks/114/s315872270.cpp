#include <stdio.h>
static const int MAX=100;
static const int INFTY=(1<<30);
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,M[MAX][MAX];

int prim(){
    int i,u,minv,sum;
    int d[MAX],p[MAX],color[MAX];

    for(i=0;i<n;i++){
        d[i]=INFTY;
        p[i]=-1;
        color[i]=WHITE;
    }
    d[0]=0;
    while(1){
        minv=INFTY;
        u=-1;
        for(i=0;i<n;i++){
            if(minv>d[i] && color[i]!=BLACK){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1)
            break;
        color[u]=BLACK;
        for(i=0;i<n;i++){
            if(color[i]!=BLACK && M[u][i]!=INFTY){
                if(d[i]>M[u][i]){
                    d[i]=M[u][i];
                    p[i]=u;
                    color[i]=GRAY;
                }
            }
        }
    }
        sum=0;
        for(i=0;i<n;i++)
            if(p[i]!=-1)
                sum+=M[i][p[i]];
    return sum;
}

int main(void){
    int i,o,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(o=0;o<n;o++){
            scanf("%d",&e);
            M[i][o]=(e==-1)?INFTY:e;
        }
    printf("%d\n",prim());
    return 0;
}