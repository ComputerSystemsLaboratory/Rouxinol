#include <stdio.h>

int main(void)
{
	int a[100];
	int b,c,d;
	
	scanf("%d",&b);
	
	for(d = 0;d < b;++d){
		scanf("%d",&c);
		a[d] = c;
	}
	for(d = b-1;d >= 0;--d){
		printf("%d",a[d]);
		if(d != 0){
			printf(" ");
		}
	}
	printf("\n");
	
	return(0);
}