#include <stdio.h>
#include <string.h>

bool w[1000000];
int a[1000000];

int main()
{
	for(int i = 0; i < 1000000; i++)
	{
		w[i] = true;
	}
	int all = 0;
	a[0] = 0;
	a[1] = 0;
	for(int i = 2; i < 1000000; i++)
	{
		if(w[i])
		{
			all++;
			for(int j = 2; i * j < 1000000; j++)
			{
				w[i * j] = false;
			}
		}
		a[i] = all;
	}
	while(1)
	{
		int n;
		if(EOF == scanf("%d",&n))
		{
			break;
		}
		printf("%d\n",a[n]);
	}
	return 0;
}