#include<stdio.h>
int main()
{
	int W,H,x,y,r,xr1,xr2,yr1,yr2;
	scanf("%d %d %d %d %d", &W, &H, &x,&y,&r);
	xr1 = x + r;
	xr2 = x - r;
	yr1 = y + r;
	yr2 = y - r;
	if(0<=x<=W)
	{
		if (0 <= xr2 && xr1 <= W)
		{
			if (0 <= y <= H)
			{
				if (0 <=yr2 && yr1 <= H) printf("Yes\n");
				else  printf("No\n");
			}
			else printf("No\n");
		}
		else printf("No\n");
	}
	else printf("No\n");
	return 0;
}