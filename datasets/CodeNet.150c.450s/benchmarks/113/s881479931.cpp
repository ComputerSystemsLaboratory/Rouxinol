#include<stdio.h>
int main()
{
	int x[25556], cnt = 0;
	while (1)
	{
		cnt++;
		scanf("%d", &x[cnt]);
		if (x[cnt] == 0) break;
	}
	cnt = 0;
	while (1)
	{
		cnt++;
		if (x[cnt] == 0) break;
		else printf("Case %d: %d\n", cnt, x[cnt]);
	}
		
}