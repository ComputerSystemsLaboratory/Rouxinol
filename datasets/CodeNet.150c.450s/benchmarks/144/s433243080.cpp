#include<stdio.h>
int main( ){
  long long n,m,l,a[101][101],b[101][101],c[101][101]={};
  scanf("%lld %lld %lld",&n,&m,&l);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%lld",&a[i][j]);
    }
  }
  for(int x=0;x<m;x++){
    for(int y=0;y<l;y++){
      scanf("%lld",&b[x][y]);
    }
  }
  for(int p=0;p<n;p++){
    for(int q=0;q<l;q++){
      for(int s=0;s<m;s++){
	c[p][q]+=a[p][s]*b[s][q];
      }
    }
  }
  for(int w=0;w<n;w++){
    for(int z=0;z<l;z++){
      printf("%lld",c[w][z]);
      if(z!=l-1){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}