#include <stdio.h>

void c(int a,int b);

int main(void){
	int x,y;

	while(1){

		scanf("%d %d",&x,&y);
		if(x == 0 && y == 0){
			break;
		}

		c(x,y);
	}

}

void c(int a,int b){
	if(a > b){
		printf("%d %d\n",b,a);
	}else if(a <= b){
		printf("%d %d\n",a,b);
	}
}