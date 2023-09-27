#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>




int main()
{
	int n;
	int i,j;
	int ans,sum;

	while(1)
	{
		scanf("%d",&n);
		if(n==0){break;}
		else
		{
			ans=0;
			for(i=1;i<500;i++)
			{
				sum = i;
				for(j=i+1;j<501;j++)
				{
					sum+=j;
					if(sum==n)
					{
						ans+=1;
						break;
					}
					if(sum>n){break;}
				}
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
	