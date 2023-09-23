#include <stdio.h>
int main(void){
  int r,c,i,j;
  scanf("%d%d",&r,&c);
  int a[101][101]={};
  for(i=0;i<r;i++){
      for(j=0;j<c;j++){
          scanf("%d",&a[i][j]);
          a[i][c]+=a[i][j];
          a[r][j]+=a[i][j];
          a[r][c]+=a[i][j];
          
        }
  }
  for(i=0;i<=r;i++){
      printf("%d",a[i][0]);
      for(j=1;j<=c;j++){
          
          printf(" %d",a[i][j]);
          
      }
      printf("\n");
  }
  
    return 0;
}