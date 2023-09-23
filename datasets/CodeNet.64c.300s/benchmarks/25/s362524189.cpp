#include<stdio.h>

int main()
{
	int a[4],b[4],hit,brow;

	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF)
	{
		scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
		hit=0;
		brow=0;

		if(a[0]>9||a[1]>9||a[2]>9||a[3]>9||b[0]>9||b[1]>9||b[2]>9||b[3]>9)
		{
		}
		else if(a[0]<0||a[1]<0||a[2]<0||a[3]<0||b[0]<0||b[1]<0||b[2]<0||b[3]<0)
		{
		}
		else
		{
			for(int x=0;x<4;x++)
			{
				for(int y=0;y<4;y++)
				{
					if(a[x]==b[y])
					{
						if(x==y)
						{
							hit++;
						}
						else
						{
							brow++;
						}
					}
				}
			}
			printf("%d %d\n",hit,brow);
		}
	}
	return 0;
}