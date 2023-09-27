#include <stdio.h>

int main(void)
{
  int n,m,l,i,j,k;
  int a[100][100]={0},b[100][100]={0};
  long long c[100][100]={0};

  scanf("%d %d %d",&n,&m,&l);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(j=0;j<m;j++){
    for(k=0;k<l;k++){
      scanf("%d",&b[j][k]);
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
	c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }

  for(i=0;i<n;i++){
    for(k=0;k<l;k++){
      if(k!=l-1){
        printf("%lld ",c[i][k]);
      }
      else{
	printf("%lld\n",c[i][k]);
      }
    }
  }

  return 0;
}