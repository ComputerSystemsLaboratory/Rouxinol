#include <stdio.h>

#define MAX 100
#define INF 1000000000
#define w 0
#define x 1
#define z 2

int n, m[MAX][MAX];

void data(){
  int min,d[MAX],a[MAX],i,u;
  for(i = 0 ;i< n;i++){
    d[i] = INF;
    a[i] = INF;
  }
  d[0]=0;
  a[0]=x;
  while(1){
    min = INF;
    u = -1;
    for(i = 0;i<n;i++){
      if(min > d[i] && a[i] != z){
        u = i;
        min = d[i];
      }
    }
    if(u == -1) break;
    a[u] = z;
    for(i = 0;i<n;i++){
      if(a[i]!= z &&m[u][i] != INF){
        if(d[i] > d[u] + m[u][i]){
          d[i] = d[u] + m[u][i];
        }
      }
    }
  }
  int v;
  for(i = 0 ;i< n;i++){
    v = d[i];
    if(d[i] == INF) v = -1;
    printf("%d %d\n",i,v);
  }
}

int main(){
  scanf("%d",&n);
  int i,j,k,c,u,v;
  for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
      m[i][j] = INF;
    }
  }
  for(i = 0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j = 0;j<k;j++){
      scanf("%d %d",&v,&c);
      m[u][v] = c;
    }
  }
  data();
  return 0;
}