#include <stdio.h>

int main(){

  int n,m;
  int a[100][100],b[100];
  int i,k,r;

  scanf("%d%d",&n,&m);

  for(i=0; i<n; ++i){
    for(k=0; k<m; ++k){
      scanf("%d",&a[i][k]);
    }
  }

  for(i=0; i<m; ++i){
    scanf("%d",&b[i]);
  }

  for(i=0; i<n; ++i){
    r=0;
    for(k=0; k<m; ++k){
      r+=a[i][k]*b[k];
    }
    printf("%d\n",r);
  }



  return 0;
}
