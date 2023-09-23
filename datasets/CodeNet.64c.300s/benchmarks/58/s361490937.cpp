#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstring>
#include <memory>
#include <memory.h>
using namespace std;
char map[110][110];
int m,n,cnp;
int way[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
void dfs(int y,int x,char ch)
{
	for(int i = 0;i<4;i++)
	{
		int dx = x+way[i][0];
		int dy = y+way[i][1];
		if(dx>=0 && dx <n&& dy>=0&& dy < m && map[dy][dx]==ch)
		{
			map[dy][dx] = '0';
			dfs(dy,dx,ch);
		}
	}
}
int main()
{
	while(cin >> m >> n&&m+n)
	{
		memset(map,0,sizeof(map));
		cnp = 0;
		char ch;
		for(int i = 0;i<m;i++)
		{
			for(int j =0;j<n;j++)
			cin >> map[i][j];
		}
		for(int i = 0;i<m;i++)
		{
			for(int j = 0;j<n;j++)
			{
				if(map[i][j]=='@'||map[i][j]=='#'||map[i][j]=='*')
				{
					ch = map[i][j];
					cnp++;
					dfs(i,j,ch);
				}
			}
		}
		cout << cnp << endl;
	}
	return 0;
}