#include<iostream>
#include<queue>
using namespace std;
typedef pair<int, int> P;
const int MAX_N = 1000;
const int MAX_M = 1000;
const int MAX_T = 9;
const int INF = 100000000;
int n, m, t;
int sx, sy;
int ans = 0;
char field[MAX_N][MAX_M];
int d[MAX_N][MAX_M];
P factory[MAX_T];
int dx[4] = {0, -1, 0, 1}, dy[4] = {-1, 0, 1, 0};

//从当前起点&#24320;始，&#23547;找第num个&#22902;酪 
int bfs(int x, int y, int num){
	int gx = factory[num].first;
	int gy = factory[num].second;
	queue<P> que;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			d[i][j] = INF;
		}
	}
	d[x][y] = 0;
	que.push(P(x,y));
	
	while(que.size()){
		P p = que.front();
		que.pop();
		int x = p.first;
		int y = p.second;
		if(x == gx && y == gy){
			break;
		}
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i], ny = y + dy[i];
			if(nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] != 'X' && d[nx][ny] == INF){
				d[nx][ny] = d[x][y] + 1;
				que.push(P(nx, ny));
			}
		}
	}
	
	return d[gx][gy];
}

void solve(){
	cin >> n >> m >> t;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> field[i][j];
			if(field[i][j] == 'S'){
				factory[0] = P(i, j);
			}
			if(field[i][j] >= '1' && field[i][j] <= '9'){
				int index = field[i][j] - '0';
				factory[index] = P(i, j);
			}
		}
	}

	int ans = 0;
	
	for(int i = 0; i < t; i++){
		int x = factory[i].first;
		int y = factory[i].second;
		ans += bfs(x, y, i + 1);
	}
	cout << ans << "\n";
}

int main(){
	solve();
}