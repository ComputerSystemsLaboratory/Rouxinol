#include<stdio.h>
int main(){
  int dice[6];
  int temp1,temp2;
  char move;
  char kg;
  scanf("%d %d %d %d %d %d",&dice[0],&dice[1],&dice[2],&dice[3],&dice[4],&dice[5]);
  scanf("%c",&kg);
  while(1){
    scanf("%c",&move);
    if(move == '\n')break;
    if(move == 'N'){
      temp1 = dice[0];
      dice[0] = dice[1];
      temp2 = dice[4];
      dice[4] = temp1;
      temp1 = dice[5];
      dice[5] = temp2;
      dice[1] = temp1;
    }
    if(move == 'S'){
      temp1 = dice[0];
      dice[0] = dice[4];
      temp2 = dice[1];
      dice[1] = temp1;
      temp1 = dice[5];
      dice[5] = temp2;
      dice[4] = temp1;
    }
    if(move == 'W'){
      temp1 = dice[0];
      dice[0] = dice[2];
      temp2 = dice[3];
      dice[3] = temp1;
      temp1 = dice[5];
      dice[5] = temp2;
      dice[2] = temp1;
    }
    if(move == 'E'){
      temp1 = dice[0];
      dice[0] = dice[3];
      temp2 = dice[2];
      dice[2] = temp1;
      temp1 = dice[5];
      dice[5] = temp2;
      dice[3] = temp1;
    }
  }
  printf("%d\n",dice[0]);
  return 0;
}