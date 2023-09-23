#include<stdio.h>

int main()
{
  int r, c, i, j, csum, rsum;

  scanf("%d %d", &r, &c);
  int data[r+1][c+1];

  //表の初期化
  for(i=0; i <= r; i++){
    for(j=0; j <= c; j++){
      data[i][j]=0;
    }
   }

  //表に値を代入
  for(i=0; i < r; i++){
    for(j=0; j < c; j++){
      scanf("%d", &data[i][j]);
    }
  }

  //行の合計計算
  for(i=0; i < r; i++){
    csum=0;
    for(j=0; j < c; j++){
      csum += data[i][j];
    }
    data[i][c]=csum;
  }

  //列の合計計算
  for(i=0;i <= c; i++){
    rsum=0;
    for(j=0; j <= r; j++){
      rsum += data[j][i];
    }
    data[r][i]=rsum;
  }

  //表の出力
  for(i=0; i <= r; i++){
    for(j=0; j < c; j++){
      printf("%d ", data[i][j]);
    }
    printf("%d", data[i][c]);
    printf("\n");
  } 

  return 0;
}