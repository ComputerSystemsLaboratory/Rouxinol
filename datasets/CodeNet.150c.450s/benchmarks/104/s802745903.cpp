#include <stdio.h>
#include <string.h>

int now[30];

int main()
{
	int w,n;
	scanf("%d%d",&w,&n);
	for(int i = 0; i < w; i++)
	{
		now[i] = i + 1;
	}
	for(int i = 0; i < n; i++)
	{
		int a,b;
		scanf("%d,%d",&a,&b);
		int w = now[a - 1];
		now[a - 1] = now[b - 1];
		now[b - 1] = w;
	}
	for(int i = 0; i < w; i++)
	{
		printf("%d\n",now[i]);
	}
	return 0;
}