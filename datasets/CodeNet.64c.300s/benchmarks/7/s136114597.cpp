#include<stdio.h>
int main(void){

int i,j,x;
int n=0;
int card[4][13];
char mark;

  for(i=0;i<4;i++){
    for(j=1;j<14;j++){
      card[i][j]=0;
    }
  }

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&mark,&x);
    switch(mark){
    case 'S': card[0][x]=1;
      break;
    case 'H': card[1][x]=1;
      break;
    case 'C': card[2][x]=1;
      break;
    case 'D': card[3][x]=1;
      break;
		}
		
	}
    for(i=0;i<4;i++){
      for(j=1;j<14;j++){
        if(card[i][j]==0){
          if(i==0)
            printf("S %d\n",j);
	      else if(i==1)
            printf("H %d\n",j);
          else if(i==2)
            printf("C %d\n",j);
          else if(i==3)
            printf("D %d\n",j);
        }
      }
    }
    return 0;
}