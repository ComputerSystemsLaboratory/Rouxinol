#include <stdio.h>

int main(void)
{
	int n = 1;
	int p = 1;
	int pt[64] = {0};
	int out[10000] = {0};

	int now = 0;
	int maxp = 0;

	int round = 0;
	int endflag = 1;

	int i;

	while(1)
	{

		scanf("%d",&n); scanf("%d",&p);

		if( p == 0 && n == 0 )
		break;

		maxp = p;

		while(1)
		{
	

			for( now = 0 ; now < n ; now++ )
			{
				if(pt[now] == maxp)
				{
				out[round] = now;
				endflag = 0;
				break;
				}
	
				else if(p)
				{	
				pt[now]++;
				p--;
				}

				else
				{
				p += pt[now];
				pt[now] = 0;
				}
			}


		now = 0;

		if(endflag)
			{continue;}

		else
			{
			endflag = 1;
			round++;
			for( i = 0 ; i < 64 ; i++)
			{pt[i] = 0;}
			break;
			}

		}
	}


	for( i = 0 ; i < round ; i++ )
	{
		printf("%d\n",out[i]);
	}

	return 0;

}

	