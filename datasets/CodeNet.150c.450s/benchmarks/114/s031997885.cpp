#include <stdio.h>
#define Max 100
#define Maxi 2147483647
#define W  0
#define X  1
#define Z  2

int n,m[Max][Max];
int prim(){
  int i,u,minv;
  int d[Max],p[Max],c[Max];

  for(i=0;i<n;i++){
    d[i] = Maxi;
    p[i] = -1;
    c[i] = W;
  }

  d[0] = 0;
  while(1){
    minv = Maxi;
    u = -1;
    for(i = 0;i < n; i++){
      if(minv > d[i] && c[i] != Z){
        u = i;
        minv = d[i];
      }
    }
    if( u == -1) break;
    c[u] = Z;
    for(i = 0;i<n;i++){
      if(c[i]!= Z && m[u][i]!= Maxi){
        if(d[i] > m[u][i]){
          d[i] = m[u][i];
          p[i] = u;
          c[i] = X;
        }
      }
    }
  }
  int sum = 0;
  for(i = 0; i < n; i++){
    if(p[i]!= -1){
      sum += m[i][p[i]];
    }
  }
  return sum;
}

int main(){

  scanf("%d",&n);
  int i,j,e;
  for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
      scanf("%d",&e);
      if(e == -1){
        m[i][j] = Maxi;
      }
      else m[i][j] = e;
    }
  }
  printf("%d\n", prim());
  return 0;

}