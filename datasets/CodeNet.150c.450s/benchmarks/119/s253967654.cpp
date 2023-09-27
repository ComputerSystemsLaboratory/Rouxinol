#include<iostream>
#include <cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<queue>

#define REP(i,n) for(int i = 0;i < n ;i++)
	
using namespace std;

int mp[60][60],dp[60][60];
int w,h,ans;
int dx[] = {1,1,0,-1,-1,-1,0,1},dy[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int x,int y)
{
	REP(i,8)
	{
		int cx = x + dx[i],cy = y + dy[i];
		if(cx >= 0 && cx < h && cy >= 0 \
				&& cy < w && dp[cx][cy] == 0 && mp[cx][cy] == 1)
				{
					dp[cx][cy] = 1;
					dfs(cx,cy);
				
				}
				
	}
}
			

int main()
{
	for(;;)
	{
		ans = 0;
		REP(i,60)REP(j,60)dp[i][j]=0;
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		REP(i,h)REP(j,w)cin >> mp[i][j];
		REP(i,h)REP(j,w)
		{
			if(mp[i][j] == 1 && dp[i][j] == 0)
			{
				ans++;
				dfs(i,j);
			}
		}
		
		cout << ans << endl;
		
	}
	return 0;

}