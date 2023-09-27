#include<stdio.h>
int main()
{
	int n,r;
	while(scanf("%d",&n),n)
	{
		n=1000-n;r=n/500;r+=(n%=500)/100;r+=(n%=100)/50;r+=(n%=50)/10;r+=(n%=10)/5;r+=(n%=5);
		printf("%d\n",r);
	}
	return 0;
}