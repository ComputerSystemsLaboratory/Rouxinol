#include <bits/stdc++.h>
int n,G[101][101];
int d[101];
int T = 0;
int F[101] = {0};
int k = 0;
 
void visit(int u) {
  int i,j,v;
  T++;  
  d[u] = T;
 
  for(v=0;v<n;v++) {
    if(G[u][v] == 1 && d[v] == 0 ) {
      visit(v);
    }
  }
   
  T++;
  F[u] = T;
 
}
 
 
 
int main() {
   
   
  int i,j,k,l,u,a,t;
 
  for(i=0;i<n;i++) d[i] = 0;
 
  scanf("%d",&n);
 
  for(i=0;i<n+1;i++)
    for(j=0;j<n+1;j++) {
      G[i][j] = 0;
 
    }
 
  for(i=0;i<n;i++){
 
    scanf("%d %d ",&k,&u);
    //    printf("u = %d\n",u);
 
    for(j=0;j<u;j++) {
      scanf("%d",&a);
      G[k -1][a-1] = 1;
      // printf("G[%d][%d] = 1\n",i,k-1);
    }
  }
  for(i=0;i<n;i++) {
    if(d[i] == 0) 
    visit (i);
  }
     
  for(i=0;i<n;i++) {
    printf("%d %d %d\n",i+1,d[i],F[i]);
  }
  return 0;
 
     
     
}