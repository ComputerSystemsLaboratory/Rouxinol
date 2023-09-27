#include<cstdio>



using namespace std;
int main(void)
{
	int x,y;
	int karix,kariy;
	while(1)
	{
		scanf("%d%d",&x,&y);
		if(x == 0 && y == 0) break;
		int koji;
		scanf("%d",&koji);
		int huka[17][17] = {0};
		for(int i = 0;i<koji;i++)
		{
			scanf("%d%d",&karix,&kariy);
			huka[karix][kariy] = 1;
		}
		int dp[17][17] = {0};
		dp[1][1] = 1;
		for(int i = 1;i<=x;i++)
		{
			for(int j = 1;j <= y;j++)
			{
				dp[i+1][j] += dp[i][j];
				dp[i][j+1] += dp[i][j];
				if(huka[i+1][j] == 1) dp[i+1][j] = 0;
				if(huka[i][j+1] == 1) dp[i][j+1] = 0;
			}
		}
		printf("%d\n",dp[x][y]);
	}
	return 0;	
}