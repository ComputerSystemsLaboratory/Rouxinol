#include<iostream>
#include<queue>
#include<string.h>
#include<limits.h>
#include<cstdio>
using namespace std;
const int MAXH = 1100;
const int INF = INT_MAX;
typedef pair<int, int> P;
int H,W,N;
char B[MAXH][MAXH];
int d[MAXH][MAXH];
int sx, sy;
int gx, gy;
int res;
int dx[5] = {1,0,-1,0};
int dy[5] = {0,1,0,-1};

void bfs()
{
	queue<P> que;
	que.push(P(sx,sy));
	d[sx][sy] = 0;
	
	while(que.size())
	{
		P p = que.front(); que.pop();
		
		if(p.first== gx && p.second == gy)break;
		for(int i = 0; i<4;i++)
		{
			int nx = p.first+ dx[i], ny = p.second + dy[i];

			if(B[nx][ny] != 'X' && d[nx][ny] ==INF)
				{
				que.push(P(nx,ny));
				d[nx][ny] = d[p.first][p.second] + 1;

				}
		}	
	}
	res+= d[gx][gy];
}

void rest()
{
	for(int i = 1; i<= W;i++)
		for(int j = 1; j<= H; j++)
			d[i][j] = INF;
}
void solve()
{
	for(int che = 1; che <= N; che++)
		for(int i = 1 ; i<= W;i++)
			for(int j = 1; j <= H; j++)
			{
				if(B[i][j] - '0' == che)
				{
					rest();
					gx = i; gy = j;
					bfs();
					sx = gx; sy = gy;
				}
			}	
	cout << res << endl;
}

int main()
{
	
	cin >>H>>W>>N;
	memset(B,'X',sizeof(B));
	for(int j = 1 ; j<= H;j++)
	{
		for(int i = 1; i <= W; i++)
		{
			cin >> B[i][j];
			if(B[i][j] == 'S')
				{sx = i; sy = j;}
		}	
		getchar();
	}

	res = 0;	
	solve();
	
}