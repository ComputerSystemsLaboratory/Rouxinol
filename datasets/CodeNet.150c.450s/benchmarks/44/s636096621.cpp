#include<cstdio>

int date[2][4];


int main()
{
	while(scanf("%d%d%d%d%d%d%d%d",&date[0][0],&date[0][1],&date[0][2],&date[0][3],&date[1][0],&date[1][1],&date[1][2],&date[1][3])!=EOF)
	{
		int hit=0;
		int blow=0;
		for(int i=0;i<4;i++)
		{
			if(date[0][i]==date[1][i])hit++;
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(date[0][i]==date[1][j])blow++;
			}
		}
		blow-=hit;
		printf("%d %d\n",hit,blow);
	}
}