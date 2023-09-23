#include<stdio.h>
int main()
{
	int N,M,P,i;
	while(scanf("%d%d%d",&N,&M,&P),N)
	{
		int a[101]={0},s=0;
		for(i=1;i<=N;++i)scanf("%d",&a[i]),s+=a[i];
		if(a[M])printf("%d\n",s*(100-P)/a[M]);
		else puts("0");
	}
	return 0;
}