#include <iostream>
#include <queue>
#include <utility>
#include <limits>
using namespace std;
typedef pair<int, int> P;
const int MAX_H = 1000, MAX_W = 1000, MAX_N = 9;
int h, w, n;
char c[MAX_H][MAX_W];
int sx, sy;
int d[MAX_H][MAX_W];
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int INF = numeric_limits<int>::max();
int gx[MAX_N], gy[MAX_N];

int bfs()
{
	queue<P> que;
	
	for(int i = 0; i != h; ++i){
		for(int j = 0; j != w; ++j){
			d[i][j] = INF;
		}
	}
	
	que.push(P(sx, sy));
	d[sx][sy] = 0;
	
	int count = 0;
	while(!que.empty()){		
		P p=que.front();
		que.pop();
		
		if(p.first == gx[count] && p.second == gy[count]){
			count++;
			
			while(!que.empty())
				que.pop();
			
			int score = d[p.first][p.second];
			for(int i = 0; i != h; ++i){
				for(int j = 0; j != w; ++j){
					d[i][j] = INF;
				}
			}
			d[p.first][p.second] = score;
		}
			
		if(count == n)
			break;
		
		for(int i = 0; i != 4; ++i){
			int nx = p.first + dx[i],
				ny = p.second + dy[i];
			
			if(0 <= nx && nx < h && 0 <= ny && ny < w &&
				c[nx][ny] != 'X' && d[nx][ny] == INF){
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
		
	}
	
	return d[gx[n - 1]][gy[n - 1]];
	
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin >> h >> w >> n;
	for(int i = 0; i != h; ++i){
		for(int j = 0; j != w; ++j){
			char a;
			cin >> a;
			if(a == 'S')
				sx = i, sy = j;
			if('1' <= a && a <= '9')
				gx[a - '0' - 1] = i, gy[a - '0' - 1] = j;
			c[i][j] = a;
		}
	}
	
	cout << bfs() << endl;
	
	return 0;
}