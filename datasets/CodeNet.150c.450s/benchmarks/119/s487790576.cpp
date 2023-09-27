#include <iostream>
#include <cstring>
using namespace std;

int fld[64][64] = {0};
int dx[] = {0,0,1,1,1,-1,-1,-1};
int dy[] = {1,-1,0,1,-1,0,1,-1};

void dfs(int y, int x)
{
	fld[y][x] = 0;
	for(int i=0; i<8; i++)
	{
		int ny = y+dy[i];
		int nx = x+dx[i];

		if(fld[ny][nx])
		{
			dfs(ny,nx);
		}
	}
}


int main()
{
	int w,h,c;
	while(cin >> w >> h, w||h)
	{
		memset(fld,0,sizeof(fld));

		for(int y=1; y<=h; y++)
		for(int x=1; x<=w; x++)
		{
			cin >> fld[y][x];
		}

		c=0;
		for(int y=1; y<=h; y++)
		for(int x=1; x<=w; x++)
		{
			if(fld[y][x])
			{
				c++;
				dfs(y,x);
			}
		}

		cout << c << endl;
	}
}