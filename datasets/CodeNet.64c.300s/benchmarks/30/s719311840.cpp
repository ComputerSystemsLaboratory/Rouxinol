#include<stdio.h>
int main(void)
{
	int s=0,h=0,ft=0,t=0,f=0,o=0,money=1000,genkin,sum=0;
	scanf("%d",&genkin);
	while(genkin!=0){
	money=money-genkin;
	s=money/500;
	money=money-s*500;
	h=money/100;
	money=money-h*100;
	ft=money/50;
	money=money-ft*50;
	t=money/10;
	money=money-t*10;
	f=money/5;
	money=money-f*5;
	o=money/1;
	sum=s+h+ft+t+f+o;
	printf("%d\n",sum);
	sum=0;
	money=1000;
	scanf("%d",&genkin);
	}
	return 0;
}