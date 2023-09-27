// AOJ 1160
#include<iostream>
#define rep(i,a) for( int i = 0; i != (a); ++i )

const int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

int w, h;
bool c[50][50];

void dfs( int y, int x )
{
	c[y][x] = false;

	rep( i, 8 )
	{
		int nx = x+dx[i], ny = y+dy[i];

		if( nx >= 0 && nx < w && ny >= 0 && ny < h && c[ny][nx] )
			dfs( ny, nx );
	}

	return;
}

int main()
{
	while( std::cin >> w >> h, w|h )
	{
		rep( i, h )
			rep( j, w )
				std::cin >> c[i][j];

		int ans = 0;
		rep( i, h )
			rep( j, w )
				if( c[i][j] )
					dfs( i, j ), ++ans;

		std::cout << ans << std::endl;
	}

	return 0;
}