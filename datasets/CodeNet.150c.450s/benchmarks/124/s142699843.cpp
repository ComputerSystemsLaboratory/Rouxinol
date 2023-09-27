#include <stdio.h>
static const int MAX=100;
static const int INFTY=(1<<30);
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
int n,M[MAX][MAX];

void dijkstra(){
    int minv,i,o;
    int d[MAX],color[MAX];
    for(i=0;i<n;i++){
        d[i]=INFTY;
        color[i]=WHITE;
    }
    d[0]=0;
    color[0]=GRAY;
    while(1){
        minv=INFTY;
        int u=-1;
        for(i=0;i<n;i++){
            if(minv>d[i] && color[i] != BLACK){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1)
            break;
        color[u]=BLACK;
        for(o=0;o<n;o++){
            if(color[o]!= BLACK && M[u][o] != INFTY){
                if(d[o]>d[u]+M[u][o]){
                    d[o]=d[u]+M[u][o];
                    color[o]=GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d %d\n",i,(d[i]==INFTY)?-1:d[i]);
}

int main(void){
    int i,o,k,c,u,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(o=0;o<n;o++)
            M[i][o]=INFTY;
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        for(o=0;o<k;o++){
            scanf("%d %d",&v,&c);
            M[u][v]=c;
        }
    }
    dijkstra();
    return 0;
}