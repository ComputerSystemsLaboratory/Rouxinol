#include<stdio.h>
int main()
{
	int a,b;
	char c;
	while(scanf("%d %c %d",&a,&c,&b)!=EOF)
	{
		if(c=='?')
		{
			break;
		}
		if(c=='+')
			{
				printf("%d\n",a+b);
			}
		if(c=='-')
			{
				printf("%d\n",a-b);
			}
		if(c=='*')
			{
				printf("%d\n",a*b);
			}
		if(c=='/')
			{
				printf("%d\n",a/b);
			}
	}
	return 0;
 } 