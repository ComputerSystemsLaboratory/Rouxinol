#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int step;
char gard[200][200];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

void dfs( int y, int x , char pattern)
{
	int nx, ny;
	for(int i=0; i<4; ++i)
	{
		nx = x+dir[i][0]; ny = y+dir[i][1];
		if( gard[ny][nx]==pattern )
		{
			gard[ny][nx]=0;
			dfs(ny,nx,pattern);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	int W, H;
	while(cin>>H>>W && H && W)
	{
		memset(gard,0x00,sizeof(gard));
		step = 0;
		for(int i=1; i<=H; ++i)
		{
			for(int j=1; j<=W; ++j)
			{
				cin>>gard[i][j];
			}
		}
		for(int i=1; i<=H; ++i){
			for(int j=1; j<=W; ++j){
				if( gard[i][j] )
				{
					char pattern = gard[i][j];
					gard[i][j] = 0;
					dfs(i, j, pattern);
					++step;
				}
			}
		}
		cout<<step<<'\n';
	}
	return 0;
}