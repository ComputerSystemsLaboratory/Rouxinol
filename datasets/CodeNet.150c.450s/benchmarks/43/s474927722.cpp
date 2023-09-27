#include <stdio.h>

int main()
{
    int		a, b, n;
    int		asum, bsum;

    while(1)
    {
	scanf("%d", &n);
	if (n == 0)
	{
	    break;
	}
	asum = bsum = 0;
	for(int i = 0; i < n; i++)
	{
	    scanf("%d %d\n", &a, &b);
	    if (a > b)
	    {
		asum += a + b;
	    }else if (a < b ){
		bsum += a + b;
	    }else{
		asum += a;
		bsum += b;
	    }
	}
	printf("%d %d\n", asum, bsum);
    }
}