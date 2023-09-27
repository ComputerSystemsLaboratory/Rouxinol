#include<stdio.h>

int main(){
  int n,i,j,l,u,k;
  int v[101][101];
  int a[101][101];
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d %d",&u,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&v[i][j]);
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      a[i][j] = 0;
    }
  }
    
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
	for(l=1;l<=n;l++){
	if(v[i][j] == l) a[i][l] = 1;
      }
    }
    }
       for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
	printf("%d",a[i][j]);
	if(j != n) printf(" ");
      }
      printf("\n");
       }

       return 0;
  }