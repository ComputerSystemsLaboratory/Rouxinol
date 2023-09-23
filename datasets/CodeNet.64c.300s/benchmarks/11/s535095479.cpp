#include<stdio.h>
int main(){
	int i,n,h=0,m=0,s=0;
	scanf("%d",&i);
	while(i/3600){
		h++;
		i-=3600;
	}
	while(i/60){
		m++;
		i-=60;
	}
	printf("%d:%d:%d\n",h,m,i);
} 
