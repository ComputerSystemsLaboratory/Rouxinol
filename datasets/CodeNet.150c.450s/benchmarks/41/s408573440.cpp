#include<cstdio>
#include<algorithm>
using namespace std;

const long INF = 2000000000;

int v,e;
long d[100][100];

int main(){
  scanf("%d %d",&v,&e);
  fill(d[0],d[0]+10000,INF);
  for(int i=0;i<v;i++) d[i][i] = 0;
  for(int i=0;i<e;i++){
    int a,b,cost;
    scanf("%d %d %d",&a,&b,&cost);
    d[a][b] = cost;
  }
  for(int k=0;k<v;k++)
    for(int i=0;i<v;i++)
      for(int j=0;j<v;j++)
        if(d[i][k]!=INF&&d[k][j]!=INF)
          d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
  for(int i=0;i<v;i++){
    if(d[i][i]<0){
      printf("NEGATIVE CYCLE\n");
      return 0;
    }
  }
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(d[i][j]==INF) printf("INF");
      else printf("%ld",d[i][j]);
      if(j!=v-1) printf(" ");
      else printf("\n");
    }
  }
}