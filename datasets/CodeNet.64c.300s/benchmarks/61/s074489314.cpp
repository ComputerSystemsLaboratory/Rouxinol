#include <stdio.h>
int r,c,i,j,p;
int main(){
  int A[100][100];
  int S[100][1];
  int s[1][100];
  scanf("%d %d",&r,&c);
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf(" %d",&A[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      S[i][0]+=A[i][j];
    }
  }
  for(i=0;i<c;i++){
    for(j=0;j<r;j++){
      s[0][i]+=A[j][i];
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",A[i][j]);
    }
    printf("%d\n",S[i][0]);
  }
  for(j=0;j<c;j++){
    printf("%d ",s[0][j]);
  }
  for(i=0;i<r;i++){
    p+=S[i][0];
    }
  printf("%d\n",p);
  return 0;
}