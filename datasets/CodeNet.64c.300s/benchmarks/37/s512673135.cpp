#include<stdio.h>
int main()
{
	int i,j,c,s,n;
	while(scanf("%d",&n),n)
	{
		for(s=0,i=2;i<=n;++i)
		{
			for(c=0,j=1;j<=i;++j)c+=j;
			for(;;)
			{
				if(c>=n)
				{
					if(c==n)++s;
					break;
				}
				c+=i;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}