#include <stdio.h>
#include <string.h>

int dp[2][51];

int main()
{
	while(1)
	{
		int n;
		if(EOF == scanf("%d",&n))
		{
			break;
		}
		int now = 0;
		for(int i = 0; i <= 50; i++)
		{
			dp[now][i] = 0;
		}
		dp[now][0] = 1;
		for(int k = 0; k < 4; k++)
		{
			int nex = (now + 1) % 2;
			for(int i = 0; i <= 50; i++)
			{
				dp[nex][i] = 0;
			}
			for(int j = 0; j <= 50; j++)
			{
				for(int i = 0; i <= 9; i++)
				{
					if(j + i <= 50)
					{
						dp[nex][j + i] += dp[now][j];
					}
				}
			}
			now = nex;
		}
		printf("%d\n",dp[now][n]);
	}
	return 0;
}