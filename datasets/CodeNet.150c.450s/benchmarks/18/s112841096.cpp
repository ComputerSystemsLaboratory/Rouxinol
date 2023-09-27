#include<stdio.h>
#include<math.h>


int main()
{
	int debt = 100000;
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		debt = debt*1.05;
		if (debt % 1000 !=0)debt = debt / 1000 *1000 + 1000;
	}
	printf("%d\n", debt);
	return 0;
}