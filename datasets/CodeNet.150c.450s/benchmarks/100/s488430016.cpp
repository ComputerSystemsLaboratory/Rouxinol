//Vol0 0019
#include<stdio.h>
int main()
{
	long long int r=1;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		r*=i;
	}
	printf("%lld\n",r);
	return 0;
}