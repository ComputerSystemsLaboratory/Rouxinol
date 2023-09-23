#include<stdio.h>
int main(void)
{
	int a[4],b,i,j,Hit,Blow,x=0;

	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF)
	{
		Hit=0;
	    Blow=0;

		for(i=0;i<4;i++)
		{
			scanf("%d",&b);
			if(b==a[i])
				Hit++;
			else
				for(j=0;j<4;j++)
				{
					if(b==a[j])
					{
						Blow++;
						break;
					}
				}
		}
		printf("%d %d\n",Hit,Blow);
	}
  return 0;
}