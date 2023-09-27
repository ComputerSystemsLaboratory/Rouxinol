#include<stdio.h>

void swap(int *a,int *b){
	int  tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int x,y,r;
	scanf("%d %d",&x,&y);
	if(x<y){
		swap(&x,&y);
	}
	while(y > 0){
		r = x%y;
		x = y;
		y = r;
	}
	printf("%d\n",x);
}