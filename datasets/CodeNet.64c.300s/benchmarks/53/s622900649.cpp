#include<stdio.h>
int main()
{
	int a,b,c,count=0;
	scanf("%d %d %d",&a,&b,&c);

	if(1<=a && c<=10000 && a<=b)
	{
		for (a; a <= b; a++)
		{
			if (c%a == 0)
			{
				count+=1;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}