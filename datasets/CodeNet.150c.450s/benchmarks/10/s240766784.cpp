#include <stdio.h>

int main(){
  int rooms[4][3][10]={0}, sect, t1, t2, t3, t4;
  scanf("%d", &sect);
  for(int i=0;i<sect;i++){
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    rooms[t1-1][t2-1][t3-1]+=t4;
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<10;k++){
        printf(" %d", rooms[i][j][k]);
      }
      printf("\n");
    }
    if(i!=3){for(int s=0;s<20;s++){printf("#");}printf("\n");}
  }
  return 0;
}