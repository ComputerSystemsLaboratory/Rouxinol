#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
	int i,j;
	int n;
	int ans;
	char a[3],b[3];

	while(1)
	{
		scanf("%d",&n);
		if(n==0){break;}
		else
		{
			ans=0;
			for(i=0;i<(n/2);i++)
			{
				scanf("%s %s",a,b);
				if((a[0]!=b[0])&&(a[1]==b[1]))
				{
					ans++;
				}
			}
			if(n%2==1){scanf("%s",b);}

		}
		printf("%d\n",ans);
	}
	return 0;
}
	