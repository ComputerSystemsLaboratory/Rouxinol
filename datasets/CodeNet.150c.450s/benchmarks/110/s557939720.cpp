#include <iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define  point pair<int,int>
using namespace std;
char map[1000][1000];
int dist[1000][1000];
int dy[4] = { 0,1,0,-1 };
int dx[4] = { 1,0,-1,0 };
int H, W;
int ans;
vector<pair<int, point>> s;
int sx, sy, ex, ey;
void BFS()
{
	
	for (int i = 0; i < H; ++i)
		for (int j = 0; j < W; ++j)
			dist[i][j] = 1000000;
	queue<point> node;
	node.push({ sx, sy });
	dist[sx][sy] = 0;
	while (1)
	{
		point p = node.front();
		node.pop();
		for (int i = 0; i <= 3; ++i)
		{
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];
			if (0 <= nx&&nx < H&&ny < W&&ny >= 0 && dist[nx][ny] == 1000000 && map[nx][ny] != 'X')
			{
				dist[nx][ny] = dist[p.first][p.second] + 1;
				if (nx == ex&&ny == ey)
				{
					ans += dist[nx][ny];
					return;
				}
				node.push({ nx,ny });
			}
		}
	}
}
int main()
{
	int index = 0;
	int N;
	cin >> H >> W >> N;
	for (int i = 0; i < H; ++i)
		for (int j = 0; j < W; ++j)
		{
			cin >> map[i][j];
			if (map[i][j] == 'S')
				s.push_back({ 0,{i,j} });
			if ('1' <= map[i][j] && map[i][j] <= '9')
				s.push_back({ map[i][j] - '0',{i,j} });
		} 
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size()-1 ; ++i)
	{
		for (int i = 0; i < H; i++)
			for (int j = 0; j < W; ++j)
				dist[i][j] = 1000000;
		sx = s[i].second.first;
		sy = s[i].second.second;
		ex = s[i + 1].second.first;
		ey = s[i + 1].second.second;
		BFS();
	}
	cout << ans << endl;
	return 0;
}