#include<stdio.h>

int cube(int m){
	return m*m*m;
}

int main(void){
	int a;
	scanf("%d",&a);
	printf("%d\n",cube(a));
	return 0;
}