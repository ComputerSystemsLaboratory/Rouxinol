#include<stdio.h>
int main(void)
{
	long long int s;
	int n,i;
	scanf("%d",&n);
	s=1;
	for(i=2;i<=n;i++){
		s=s*i;
	}
	printf("%lld\n",s);
	return 0;
}