#include <stdio.h>

int calc(int x,int y){
	if(y == 0){
		return x;
	}else{
		return calc(y,x%y);
	}
}

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	if(x >= y)
		printf("%d\n",calc(x,y));
	else{
		printf("%d\n",calc(y,x));
	}
}