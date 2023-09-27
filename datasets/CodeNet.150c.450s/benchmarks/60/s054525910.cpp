#include <stdio.h>

int main(){
  int n,u,adj[110][110],k,v[100],i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v[j]);
      adj[u-1][v[j]-1]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==0) printf("%d",adj[i][j]);
      else printf(" %d",adj[i][j]);
    }
    printf("\n");
  }


  return 0;

}