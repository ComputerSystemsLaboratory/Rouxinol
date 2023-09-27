#include<stdio.h>

int main(void){
  int W,H;
  char room[20][20];
  int i,j,k;
  int count;
  scanf("%d %d",&W,&H);
  while(!(W==0&&H==0)){
    for(i=0;i<H;i++){
      scanf("%s",room[i]);
    }
    for(i=0;i<W*H;i++){
      for(j=1;j<H;j++){
	for(k=0;k<W;k++){
	  if(room[j][k]!='#' && room[j-1][k]=='@'){
	    room[j][k]='@';
	  }
	}
            }
      for(j=0;j<H;j++){
	for(k=1;k<W;k++){
	  if(room[j][k]!='#' && room[j][k-1]=='@'){
	    room[j][k]='@';
	  }
	}
      }
      for(j=0;j<H-1;j++){
	for(k=0;k<W;k++){
	  if(room[j][k]!='#' && room[j+1][k]=='@'){
	    room[j][k]='@';
	  }
	}
      }
      for(j=0;j<H;j++){
	for(k=0;k<W-1;k++){
	  if(room[j][k]!='#' && room[j][k+1]=='@'){
	    room[j][k]='@';
	  }
	}
      }
    }
    count=0;
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
	if(room[i][j]=='@'){
	  count++;
	}
      }
    }
    printf("%d\n",count);
    scanf("%d %d", &W,&H);
  }
  return 0;
}