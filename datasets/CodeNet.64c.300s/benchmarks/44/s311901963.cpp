#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

#define INF INFINITY

int N;
float dat[10][10];
int a,b,c,M;

int main(){
    while(scanf("%d",&N),N){
        memset(dat,0,sizeof(dat));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(i!=j)dat[i][j]=INF;
            }
        }
        M=0;
        for(int i=0;i<N;i++){
            scanf("%d%d%d",&a,&b,&c);
            dat[a][b]=dat[b][a]=c;
            M=max(M,max(a,b)+1);
        }
        for(int k=0;k<10;k++){
            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    dat[i][j]=min(dat[i][j],dat[i][k]+dat[k][j]);
                }
            }
        }
        int S;float T=INF;
        for(int s=0;s<M;s++){
            float t=0;
            for(int i=0;i<M;i++){
                t+=dat[s][i];
            }
            if(T>t){
                S=s;
                T=t;
            }
        }
        printf("%d %d\n",S,(int)T);
    }
}
 