// PKU 1979
#include<cstdio>
#define rep( i, a ) for( int i = 0; i != (a); ++i )

int W, H;
char fld[20][20];
int ans;

const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { -1, 0, 1, 0 };

void dfs( int x, int y )
{
	++ans;
	fld[y][x] = ' ';

	rep( i, 4 )
	{
		int nx = x + dx[i], ny = y + dy[i];
		
		if( nx >= 0 && nx < W && ny >= 0 && ny < H && fld[ny][nx] == '.' )
			dfs( nx, ny );
	}

	return;
}

int main()
{
	while( scanf( "%d%d", &W, &H ), W | H )
	{
		ans = 0;
		int sx, sy;

		rep( i, H )
		{
			getchar();

			rep( j, W )
			{
				fld[i][j] = getchar();
			
				if( fld[i][j] == '@' )
					sx = j, sy = i;
			}
		}

		dfs( sx, sy );

		printf( "%d\n", ans );
	}

	return 0;
}