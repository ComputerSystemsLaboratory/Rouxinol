#include<stdio.h>
int main()
{
	int n;
	long long int s=100000;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		s*=1.05;
		s+=999;
		s/=1000;
		s*=1000;
	}
	printf("%d\n",s);
	return 0;
}