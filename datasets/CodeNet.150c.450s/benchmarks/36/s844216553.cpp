#include <stdio.h>
#include <string.h>

int main()
{
	while(1)
	{
		int d;
		if(EOF == scanf("%d",&d))
		{
			break;
		}
		int now = 0;
		for(int i = d; i <= 600 - d; i += d)
		{
			now += i * i * d;
		}
		printf("%d\n",now);
	}
	return 0;
}