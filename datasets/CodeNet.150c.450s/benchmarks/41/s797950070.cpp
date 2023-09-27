#include<cstdio>
#include<algorithm>
using namespace std;

const long long INF = 10000000000;
int v,e;
long long d[100][100];

int main(){
  scanf("%d %d",&v,&e);
  fill(d[0],d[0]+10000,INF);
  for(int i=0;i<v;i++) d[i][i] = 0;
  for(int i=0;i<e;i++){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    d[a][b] = c;
  }
  for(int k=0;k<v;k++){
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
        if(d[i][k]!=INF&&d[k][j]!=INF){
          d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
        }
      }
    }
  }
  bool flag = false;
  for(int i=0;i<v;i++){
    if(d[i][i]<0){
      flag = true;
    }
  }
  if(flag){
    printf("NEGATIVE CYCLE\n");
  }else{
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
        if(j!=0) printf(" ");
        if(d[i][j]==INF) printf("INF");
        else printf("%lld",d[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}