#include <stdio.h>

int main(void)
{
	int W;
	int H;
	int x;
	int y;
	int r;

	scanf("%d%d%d%d%d", &W, &H, &x, &y, &r);

	if (x>=r && y>=r)
	{

		if (W >= x+r && H >= y+r)
		{
			printf("Yes\n");
		}

		else
		{
			printf("No\n");
		}
	}

	else
	{
		printf("No\n");
	}

	getchar();
	return 0;
}