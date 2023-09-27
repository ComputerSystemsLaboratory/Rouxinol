
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <functional>

using namespace std;

bool f[21][21];
char tile[21][21];
int w,h;

int dfs(int x,int y)
{
	if(x < 0 || y < 0 || x >= h || y >= w || f[x][y] || tile[x][y] == '#')return 0;
	
	f[x][y] = true;

	int sum = 0;

	sum += dfs(x-1,y);
	sum += dfs(x+1,y);
	sum += dfs(x,y-1);
	sum += dfs(x,y+1);

	return sum + 1;
}



int main()
{

	
	while(cin >> w >> h && w && h)
	{
		
		memset(tile,0,21*21*sizeof(char));
		memset(f,0,21*21*sizeof(bool));

		int sx,sy;

		for(int i = 0;i < h;i++)
		{
			for(int j = 0;j < w;j++)
			{
				cin >> tile[i][j];
				if(tile[i][j] == '@'){sx = i;sy = j;}
			}
		}

		cout << dfs(sx,sy) << endl;


	}


	return 0;
}