#include <stdio.h>
#include <math.h>

int main(void)
{
	int a,b,digit;
	while(1){
		if(scanf("%d %d",&a,&b) ==EOF) break;
		digit = log10((double)(a+b));
		printf("%d\n",digit+1);
	}
	return 0;
}