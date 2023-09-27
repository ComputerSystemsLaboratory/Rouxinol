#include<stdio.h>

int main(){
  int n,m,l;
  int mA[1000][1000];
  int mB[1000][1000];
  long temp;

  scanf("%d %d %d", &n, &m, &l);

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d",&mA[i][j]);
    }
  }
  for(int i=0; i<m; i++){
    for(int j=0; j<l; j++){
      scanf("%d",&mB[i][j]);
    }
  }
  //解答の配置場所を確認
  for(int i=0; i<n; i++){
    for(int j=0; j<l; j++){
      //該当要素の作成
      temp=0;
      for(int k=0; k<m; k++){
	temp += mA[i][k]*mB[k][j];
      }
      printf("%ld",temp);
      if(j<l-1) printf(" ");
    }
    printf("\n");
  }
  
}

