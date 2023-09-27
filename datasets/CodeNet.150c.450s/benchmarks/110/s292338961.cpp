#include<iostream>
#include<queue>
const int MAX_H = 1001;
const int MAX_W = 1001;
const int vx[4] = { 0, 1, 0, -1 };
const int vy[4] = { 1, 0, -1, 0 };
const int INF = 10000000;
const char num[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char c[MAX_H][MAX_W], b;
int y[MAX_H][MAX_W];
int h, w, n;
typedef std::pair<int, int> P;
P p[9];
P nest;
int bfs(P start, P end){
	std::queue<P> Q;
	P b;
	for (int i = 0; i<h; i++){
		for (int j = 0; j<w; j++){
			y[i][j] = INF;
		}
	}
	Q.push(start);
	y[start.first][start.second] = 0;
	while (Q.size()){
		b = Q.front();
		Q.pop();
		if (b == end){
			break;
		}
		for (int i = 0; i<4; i++){
			if (y[b.first][b.second] + 1<y[b.first + vx[i]][b.second + vy[i]] && y[b.first + vx[i]][b.second + vy[i]] == INF && c[b.first + vx[i]][b.second + vy[i]] != 'X'){
				y[b.first + vx[i]][b.second + vy[i]] = y[b.first][b.second] + 1;
				Q.push(P(b.first + vx[i], b.second + vy[i]));
			}
		}
	}
	return y[end.first][end.second];
}
int main(){
	int ok = 0;
	int ans = 0;
	std::cin >> h >> w >> n;
	for (int i = 0; i<h; i++){
		for (int j = 0; j<w; j++){
			std::cin >> b;
			if (b != 'S' && b != '.' && b != 'X'){
				for (int k = 0; k < 9; k++){
					if (b == num[k])ok = k;
				}
				p[ok].first = i;
				p[ok].second = j;
			}
			else if (b == 'S'){
				nest.first = i;
				nest.second = j;
			}
			c[i][j] = b;
		}
	}
	ans += bfs(nest, p[0]);
	for (int i = 1; i <= n - 1; i++){
		ans += bfs(p[i - 1], p[i]);
	}
	std::cout << ans << "\n";
}