#include <stdio.h>

int main(void)
{
	int a,b; 
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a < b)
		puts("a < b");
	else if(a > b)
		puts("a > b");
	else
	puts("a == b");
	

	
	return 0;
}