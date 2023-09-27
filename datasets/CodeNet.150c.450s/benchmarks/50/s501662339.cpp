#include<stdio.h>
int main(void)
{
	int n,c;
	while(1){
	scanf("%d",&n);
	if(n==0) break;
	c=0;
	n=1000-n;
	while(n>=500){
		n=n-500;
		c++;
	}
	while(n>=100){
		n=n-100;
		c++;
	}
	while(n>=50){
		n=n-50;
		c++;
	}	
	while(n>=10){
		n=n-10;
		c++;
	}
	while(n>=5){
		n=n-5;
		c++;
	}	
	while(n>=1){
		n=n-1;
		c++;
	}
	printf("%d\n",c);
	}
	return 0;
}