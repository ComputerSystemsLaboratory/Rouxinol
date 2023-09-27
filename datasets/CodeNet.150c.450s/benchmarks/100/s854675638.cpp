#include<stdio.h>

int main(void){
	double ans=1;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)ans=ans*i;
	
	printf("%0.0f\n",ans);
return 0;
}