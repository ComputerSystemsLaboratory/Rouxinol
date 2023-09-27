#include<stdio.h>
int main() 
{
	int x[3000],y[3000],n,a;
	n = 0;
	while (1) 
	{
		scanf("%d %d", &x[n],&y[n]);
		if ((x[n] == 0) && (y[n] == 0)) break;
		if (x[n] > y[n])
		{
			a = y[n];
			y[n] = x[n];
			x[n] = a;
		}
			n = n + 1;
			
	}
	n = 0;
	while (1)
	{
		if ((x[n] == 0) && (y[n] == 0)) break;
		printf("%d %d\n", x[n], y[n]);
		n = n + 1;
	}
	return 0;
}