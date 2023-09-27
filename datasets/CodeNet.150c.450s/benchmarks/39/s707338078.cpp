#include <stdio.h>

int main(void){
	
	int a;
	int b;
	int ans1;
	int ans2;
	
	scanf("%d %d",&a,&b);
	
	ans1 = 2 * (a + b);
	ans2 = a * b;
	printf("%d %d\n",ans2,ans1);
	
	
	return 0;
	
}