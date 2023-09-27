#include<stdio.h>
int a,b;
int i;
int n;

int max(int x,int y){
	if(x>=y)return x;
	else return y;
}

int main(){
	a=0;
	b=0;
	for(i=0;i<4;i++){
		scanf("%d",&n);
		a+=n;
	}
	for(i=0;i<4;i++){
		scanf("%d",&n);
		b+=n;
	}
	printf("%d\n",max(a,b));
	return 0;
}