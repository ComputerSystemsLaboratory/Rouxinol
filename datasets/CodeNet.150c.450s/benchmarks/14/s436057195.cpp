#include<stdio.h>

int main(){

  int x = 1;
  int y = 0;
  int value = 0;
  int cnt = 3;

  scanf("%d",&value);

  for(x = 1; x <= value; x++){

	if(x % 3 == 0){
		printf(" %d",x);
	}else if(x % 10 == 3){
		printf(" %d",x);
	}else{
		y = x;
		while(y != 0){
			y /= 10 ;
			if(y % 10 == 3){
				printf(" %d",x);
				y = 0;
			}
		}
	}
  }

  printf("\n");

  return 0;
}