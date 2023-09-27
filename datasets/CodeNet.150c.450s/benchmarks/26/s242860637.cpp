#include<stdio.h>
int main(void)
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	if(a>b){printf("a > b\n");}
	else{if(a ==b){printf("a == b\n");}
	else{printf("a < b\n");}}
	return 0;
}