#include <stdio.h>
#include <math.h>


int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b) != EOF){
	if(a + b != 0){
		printf("%d\n",(int)log10((double)(a+b)) + 1);
	}else{
		printf("0");
	}
	}
	return 0;
}