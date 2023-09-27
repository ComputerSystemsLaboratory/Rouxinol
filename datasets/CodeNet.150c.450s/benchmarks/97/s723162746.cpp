#include <stdio.h>

int main(void)
{
	int num;
	int x[200] = {0};
	int y[200] = {0};
	int tgt = 0;
	int drc = 0;

	int i;
	int k=0;
	int lwx=0,hix=0,lwy=0,hiy=0;

	int outh[1000] = {0};
	int outw[1000] = {0};

	while(1)
	{

		/*initialize*/
		for(i=0;i<200;i++)
		{x[i]=0;
		 y[i]=0;}
		lwx=0;
		hix=0;
		lwy=0;
		hiy=0;
		/*initialize*/

		scanf("%d",&num);
		if(num==0)break;

		for(i=1; i < num; i++)
		{
			scanf("%d",&tgt);
			scanf("%d",&drc);
		
			if(drc==0)
			{
				x[i] = x[tgt]-1;
				y[i] = y[tgt];
			}
			if(drc==2)
			{
				x[i] = x[tgt]+1;
				y[i] = y[tgt];
			}
			if(drc==1)
			{
				x[i] = x[tgt];
				y[i] = y[tgt]-1;
			}
			if(drc==3)
			{
				x[i] = x[tgt];
				y[i] = y[tgt]+1;
			}
		}

		for(i=0; i < num; i++)
		{
			if(x[i]<lwx)
				lwx=x[i];
			if(x[i]>hix)
				hix=x[i];
			if(y[i]<lwy)
				lwy=y[i];
			if(y[i]>hiy)
				hiy=y[i];
		}

		outw[k] = hix - lwx + 1;
		outh[k] = hiy - lwy + 1;
		k++;

	}

	for(i=0; i<k; i++)
	{
		printf("%d %d\n",outw[i],outh[i]);
	}

	return 0;
}