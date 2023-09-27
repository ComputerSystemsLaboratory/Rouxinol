#include<stdio.h>
#include<stdlib.h>

int main()
{
	while(1)
	{
		int N,M,JUDGE,judge[20][2],jposi1,jposi2,rposi;
		char move1[2];
		int move2;
		JUDGE=1;
		rposi=220;
		
		scanf("%d",&N);//何個あるか
		if(N!=0)
		{
			for(int i=0;i<N;i++)
			{
				scanf("%d",&jposi1);
				scanf("%d",&jposi2);
				judge[i][0]=21*jposi2+jposi1;
				judge[i][1]=0;
			}
			scanf("%d",&M);//何回動くか
			for(int i=0;i<M;i++)
			{
				scanf("%s",&move1[0]);
				scanf("%d",&move2);
				for(int t=0;t<move2;t++)
				{
					switch(move1[0])
					{
					case 'N':
						rposi+=21;
						break;
					case 'S':
						rposi-=21;
						break;
					case 'E':
						rposi+=1;
						break;
					case 'W':
						rposi-=1;
						break;
					}
					for(int j=0;j<N;j++)
					{
						if(rposi==judge[j][0]) judge[j][1]=1;
					}
				}
			}
			for(int i=0;i<N;i++)
			{
				if(judge[i][1]==0) JUDGE=0;
			}
			if(JUDGE) printf("Yes\n");
			else printf("No\n");
		}
		else break;
	}
}

