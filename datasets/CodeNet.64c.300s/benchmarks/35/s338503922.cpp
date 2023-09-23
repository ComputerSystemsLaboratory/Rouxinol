#include <iostream>
#include <cstdio> 
using namespace std;
/*---------------------------------------------------*/

int main(){
  int n,u,k,v;
  int g[101][101]={};
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(int i=0;i<k;i++){
      scanf("%d",&v);
      g[u][v]=1;
    }
  }
  for(int i=1;i<n+1;i++){
    printf("%d",g[i][1]);
    for(int j=2;j<n+1;j++){
      printf(" %d",g[i][j]);
    }
    printf("\n");
  }
  return 0;
}