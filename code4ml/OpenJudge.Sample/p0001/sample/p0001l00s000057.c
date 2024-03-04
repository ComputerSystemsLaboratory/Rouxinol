#include <stdio.h>

int digit (long, long);

int main (void)
{
	int i=0;
	long a[200],b[200];

	while((scanf("%ld %ld", &a[i], &b[i]))!=EOF){
		printf("%d", digit(a[i], b[i]));
		i=i+1;
	}

	return 0;
}

int digit (long a, long b)
{
	int dgt;

	if(0<=a+b && a+b<10){
		dgt=1;
	} else if(10<=a+b && a+b<100){
		dgt=2;
	} else if(100<=a+b && a+b<1000){
		dgt=3;
	} else if(1000<=a+b && a+b<10000){
		dgt=4;
	} else if(10000<=a+b && a+b<100000){
		dgt=5;
	} else if(100000<=a+b && a+b<1000000){
		dgt=6;
	} else {
		dgt=7;
	}

	return dgt;
}