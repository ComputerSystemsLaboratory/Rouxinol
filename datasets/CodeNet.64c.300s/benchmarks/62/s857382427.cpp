#include<stdio.h>

int main(){
  int gyo,retu;
  int matrix[1001][1001] = {{}};
  int vector[1001] = {};
  
  scanf("%d %d", &gyo, & retu);

  for(int i=0; i < gyo; i++){
    for(int j=0; j < retu; j++){
      scanf("%d",&matrix[i][j]);
    }
  }

  for(int i=0; i < retu; i++){
    scanf("%d",&vector[i]);
  }


  int sumretu;
  for(int i=0; i < gyo; i++){
    sumretu = 0;
    for(int j=0; j < retu; j++){
      sumretu += matrix[i][j] * vector[j];
    }
    printf("%d\n",sumretu);
  }

  return 0;
}

