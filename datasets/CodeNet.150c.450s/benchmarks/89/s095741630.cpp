#include<stdio.h>
int P(int x)
{
	if(x<2)return 0;
	if(x==2)return 1;
	if(x%2==0)return 0;
	for(int i=3;i*i<=x;++i)if(x%i==0)return 0;
	return 1;
}
int main()
{
	int a,d,n,i;
	while(scanf("%d%d%d",&a,&d,&n),n)
	{
		for(i=a;;i+=d)if(P(i))if(!--n)break;
		printf("%d\n",i);
	}
	return 0;
}