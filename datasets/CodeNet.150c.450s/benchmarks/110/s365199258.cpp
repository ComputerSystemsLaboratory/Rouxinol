#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1000000000;

typedef pair<int, int> P;	//縦、横

int H, W, N;
char maze[1001][1001];
int sx, sy;
int gx, gy;
int d[1001][1001];		//各点までの最短距離の配列
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt;


int bfs()
{
	queue<P> que;
	
	for (int i=0; i<H; i++)
	{
		for (int j=0; j<W; j++)
		{
			d[i][j] = INF;
		}
	}
	
	que.push(P(sy, sx));
	d[sy][sx] = 0;
	
	while (que.size())
	{
		P p = que.front();
		que.pop();
		if (p.first == gy && p.second == gx) break;
		
		for (int i=0; i<4; i++)
		{
			int nx = p.second + dx[i];
			int ny = p.first + dy[i];
			
			if (0<=nx && nx<W && 0<=ny && ny<H && maze[ny][nx]!='X' && d[ny][nx]==INF)
			{
				que.push(P(ny, nx));
				d[ny][nx] = d[p.first][p.second] + 1;
			}
		}
	}
	
	return d[gy][gx];
}


int main()
{
	//入力
	cin >> H >> W >> N;
	for (int i=0; i<H; i++)
	{
		cin >> maze[i];
	}
	
	//巣と１番目のチーズ工場（ゴール）の設定
	cnt = 0;
	for (int k=1; k<=N; k++)
	{
		for (int i=0; i<H; i++)
		{
			for (int j=0; j<W; j++)
			{
				if (k == 1)
				{
					if (maze[i][j] == 'S')
					{
						sx = j;
						sy = i;
					} else if (maze[i][j] == '1') {
						gx = j;
						gy = i;
					}
				} else {
					if (maze[i][j] == '1' + k - 2)
					{
						sx = j;
						sy = i;
					} else if (maze[i][j] == '1' + k - 1) {
						gx = j;
						gy = i;
					}
				}
			}
		}
		
		cnt += bfs();
	}
	
	cout << cnt << endl;
	
	/*
	cout << "cnt = " << cnt << endl;
	
	//テスト出力
	for (int i=0; i<H; i++)
	{
		cout << maze[i] << endl;
	}
	*/
	
	return 0;
}