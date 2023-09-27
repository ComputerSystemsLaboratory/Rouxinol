#include<stdio.h>

int main(){
  int cards[4][13],num,n,m,i,j;
  char mark;

  for(i=0;i<4;i++)
    for(j=0;j<13;j++)
      cards[i][j]=-1;

  scanf("%d",&n);

  for(i=0;i<n*2;i++){
    scanf("%c",&mark);
    scanf("%d",&num);
    if(mark == 'S')cards[0][num-1]=0;
    else if(mark == 'H')cards[1][num-1]=0;
    else if(mark == 'C')cards[2][num-1]=0;
    else if(mark == 'D')cards[3][num-1]=0;
  }

  for(i=0;i<4;i++)
    for(j=0;j<13;j++){
      if(cards[i][j]==-1){
	if(i==0)printf("S %d\n",j+1);
	else if(i==1)printf("H %d\n",j+1);
	else if(i==2)printf("C %d\n",j+1);
	else if(i==3)printf("D %d\n",j+1);
      }
    }

  return 0;
}