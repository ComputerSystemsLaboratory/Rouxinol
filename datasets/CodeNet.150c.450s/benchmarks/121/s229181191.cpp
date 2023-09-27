#include<cstdio>
#include<algorithm>
#include<iostream>



using namespace std;



int h,w,ans= 0;
char m[110][110];
int dx[] = {1,-1,0,0},dy[] = {0,0,1,-1};
int dp[110][110];

void dfs(int i,int j)
{
	dp[i][j] = -1;
	for(int k = 0;k < 4;k++)
	{
		if(dp[i+dy[k]][j+dx[k]] != -1 && m[i][j] == m[i+dy[k]][j+dx[k]])
		dfs(i+dy[k],j+dx[k]);
	}
	return;
}

int main()
{
	fill_n(dp[0],110*110,-1);
	for(;;)
	{
		cin >> h >> w;
		if(h == 0&& w == 0)break;
		ans = 0;
		for(int i = 1;i <= h;i++)
			for(int j = 1;j <= w;j++)
				scanf(" %c",&m[i][j]),dp[i][j] = 0;
		
		for(int i = 1;i <= h;i++)
		{
			for(int j = 1;j <= w;j++)
			{
				if(dp[i][j] != -1)
				{
					dfs(i,j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}