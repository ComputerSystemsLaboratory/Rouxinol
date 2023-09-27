#include<stdio.h>

int main(void)
{
 int a;
 int b;
 int c;
 

	scanf("%d %d %d\n", &a,&b,&c);
	
	if (c > a && c > b && b > a)	
	printf("Yes\n");
	
	else 
	printf("No\n");
	

   return 0;
   
}