#include <stdio.h>
int main(void){
  long n,m,l,i,j,k;
  scanf("%ld%ld%ld",&n,&m,&l);
  
  long a[n][m];
  long b[m][l];
  long c[100][100]={};

  for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          scanf("%ld",&a[i][j]);
      }
  }
   for(i=0;i<m;i++){
      for(j=0;j<l;j++){
          scanf("%ld",&b[i][j]);
      }
  }
  for(i=0;i<n;i++){
      for(j=0;j<l;j++){
          for(k=0;k<m;k++){
              c[i][j]+=a[i][k]*b[k][j];
          }
        
          printf("%ld",c[i][j]);
            if(j!=l-1)
          printf(" ");
      }
      printf("\n");
  }
    return 0;
}