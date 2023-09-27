#include <stdio.h>
#include <string.h>

int st[10];

int main()
{
	int stn = 0;
	while(1)
	{
		int n;
		if(EOF == scanf("%d",&n))
		{
			break;
		}
		if(n == 0)
		{
			stn--;
			printf("%d\n",st[stn]);
		}
		else
		{
			st[stn] = n;
			stn++;
		}
	}
	return 0;
}