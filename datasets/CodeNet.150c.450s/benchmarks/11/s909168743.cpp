#include <stdio.h>

int main(){
  int cards[5][14], sect, num;
  char mark;
  scanf("%d", &sect);

  // RESET STRUCTURE
  for(int i=0;i<5;i++){
    for(int j=0;j<14;j++){
      cards[i][j]=0;
    }
  }

  // DATA INPUT
  for(int i=0;i<sect;i++){
    scanf("%*c%c %d", &mark, &num);
    if(mark == 'S') cards[0][num]=1;
    else if(mark == 'H') cards[1][num]=1;
    else if(mark == 'C') cards[2][num]=1;
    else if(mark == 'D') cards[3][num]=1;
  }

  // PRESS
  for(int i=0;i<4;i++){
    for(int j=1;j<14;j++){
      if(cards[i][j]==0){
        if(i==0) printf("S %d\n", j);
        else if(i==1) printf("H %d\n", j);
        else if(i==2) printf("C %d\n", j);
        else if(i==3) printf("D %d\n", j);
      }
    }
  }
  return 0;
}