#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>




int main()
{
	int i,j,k;
	int n;
	int a,b,c;
	int x,z;
	int y[100];
	int frame,slot;

	while(1)
	{
		scanf("%d %d %d %d %d",&n,&a,&b,&c,&x);
		if((n==0)&&(a==0)&&(b==0)&&(c==0)&&(x==0)){break;}
		else
		{
			for(i=0;i<n;i++){scanf("%d",&y[i]);}
			frame=0;
			slot=0;

			if(x==y[0]){slot++;}
			if(slot!=n)
			{

			for(i=0;i<10000;i++)
			{
				if((a*x+b)%c==y[slot])
				{
					slot++;
				}
				x=((a*x+b)%c);
				frame++;
				if(slot==n){break;}
			}
			}
		}
		if(slot==n){printf("%d\n",frame);}
		else{printf("-1\n");}
	}
	return 0;
}
	