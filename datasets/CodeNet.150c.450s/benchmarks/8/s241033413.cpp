#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int n;
	scanf("%d\n", &n);
	char t[101], h[101];
	int i, taro=0, hanako=0;
	for (i = 0; i < n; i++)
	{

		scanf("%s %s\n", t,h);
		if (strcmp(t, h) > 0)
		{
			taro += 3;
		}
		else if (strcmp(t, h) == 0)
		{
			taro++;
			hanako++;
		}
		else
		{
			hanako += 3;
		}
	}
	printf("%d %d\n", taro, hanako);
	return 0;
}