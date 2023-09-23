#include <stdio.h>

int main(void){
	int a,b;
	int ans;
	int ans2;
	
	scanf("%d %d",&a,&b);
	
	ans=a*b;
	
	ans2=a+a+b+b;
	
	printf("%d %d\n",ans,ans2);
	return 0;
}