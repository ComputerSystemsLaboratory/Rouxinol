#include<stdio.h>

int main()
{
	int n,x,kaizyo=1;

	for(;;)
	{
		scanf("%d",&n);
		if(n<=20)
		{
			break;
		}
	}

	if(n==1)
	{
		kaizyo=1;
		printf("%d\n",kaizyo);
	}
	else if(n<=16)
	{
		for(x=1;x<=n;x++)
		{
			kaizyo*=x;
		}
		printf("%d\n",kaizyo);
	}
	else if(n==17)
	{
		printf("355687428096000\n");
	}
	else if(n==18)
	{
		printf("6402373705728000n");
	}
	else if(n==19)
	{
		printf("121645100408832000\n");
	}
	else if(n==20)
	{
		printf("2432902008176640000\n");
	}
	return 0;
}