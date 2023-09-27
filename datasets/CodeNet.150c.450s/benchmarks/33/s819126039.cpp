#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>




int main()
{
	int i,j;
	int x,y,s;
	int ans;

	while(1)
	{
		scanf("%d %d %d",&x,&y,&s);
		if((x==0)&&(y==0)&&(s==0)){break;}
		else
		{
			ans=0;
			for(i=1;i<s;i++)
			{
				for(j=i;j<=(s-i);j++)
				{
					if((i*(100+x)/100+j*(100+x)/100)==s)
					{
						if(ans<(i*(100+y)/100+j*(100+y)/100))
						{
							ans=(i*(100+y)/100+j*(100+y)/100);
						}
					}
				}
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}
	