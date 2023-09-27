#include<stdio.h>
int main(void)
{
  int r,c,i,j,k;
  long matrix[101][101]={0};

  scanf("%d %d",&r,&c);

  for(i=0;i<r;i++){
    matrix[i][c]=0;
    for(j=0;j<c;j++){
      scanf("%ld",&matrix[i][j]);
      matrix[i][c]=matrix[i][c]+matrix[i][j];
      matrix[r][j]=matrix[r][j]+matrix[i][j];
      matrix[r][c]=matrix[r][c]+matrix[i][j];

    }
  }
/*
  for(j=0;j<=c;j++){
    matrix[r][c]=0;
    for(i=0;i<r;i++){
      matrix[r][j]=matrix[r][j]+matrix[i][j];
    }
  }
*/
  for(i=0;i<=r;i++){
    for(j=0;j<c;j++) printf("%ld ",matrix[i][j]);
    printf("%ld\n",matrix[i][c]);
  }


  return 0;
}