#include<stdio.h>

#define MAX 500
static const int INFTY = (1<<21);
 
int main(){
  int n, i, j, e, sum,k,a,v1;
  int key,p[MAX],v[MAX],u,c[MAX],m[MAX][MAX];
   
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      m[i][j] = INFTY;
    }
  }
   
  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v1, &a);
      m[u][v1] = a;
    }
  }
  for(i=0;i<n;i++){
    c[i]=INFTY;
    p[i]=-1;
    v[i]=0;
  }
  c[0]=0;
 
  while(1){
    key=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(key>c[i] && !v[i]){
    u=i;
    key=c[i];
      }
    }
    if(u==-1)break;
    v[u]=1;
    for(j=0;j<n;j++){
      if(m[u][j]+c[u]<c[j] && !v[j]){
    p[j]=u;
    c[j]=c[u]+m[u][j];
      }
    }
  }
   
  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (c[i]==INFTY?-1:c[i]));
  }
   
  return 0;
}