#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>


#define CI cin >>
#define CO cout <<
#define E << endl;
#define F(i,max) (for(int i = 0;i < max;++i))

using namespace std;


const int INF = 100000;
int H;
int W;
int N;
int sx;
int sy;
vector<vector<char>> map;

char temp;

typedef pair<int, int> P;

int factory_x[9];
int factory_y[9];
int size_ = 0;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

void input() {
	CI H >> W >> N;

	map.resize(H);		
	for (int i = 0; i < H; i++) {
		map[i].resize(W);
	}


	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			CI temp;
			if (temp == 'S') {
				sx = j;
				sy = i;
			}
			else {
				if ((int)(temp) - '0' >= 1 && (int)(temp) - '0' <= 9) {
					factory_x[(int)temp - '0' - 1] = j;
					factory_y[(int)temp - '0' - 1] = i;
					if ((int)temp - '0' > size_) {
						size_ = (int)temp - '0';
					}
				}
			}
			map[i][j] = temp;
		}
	}
}

int bfs() {
	queue<P> que;
	
	int n = 0;
	int distance = 0;
	vector<vector<int>> d(H);
	for (int i = 0; i < H; ++i) {
		d[i].resize(W);
	}

	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			d[i][j] = INF;
		}
	}
	que.push(P(sx, sy));
	d[sy][sx] = 0;
	

	while (!que.empty()) {
		P p;
		p = que.front();
		que.pop();

		if (p.first == factory_x[n] && p.second == factory_y[n]) {
			sx = factory_x[n];
			sy = factory_y[n];

			
			distance += d[p.second][p.first];
			
			
			if (n == size_ - 1) {
				break;
			}
			n++;

			for (int i = 0; i < H; ++i) {
				for (int j = 0; j < W; ++j) {
					d[i][j] = INF;
				}
			}
			d[sy][sx] = 0;
			while (que.size() > 0) {
				que.pop();
			}
			que.push(P(sx, sy));
			
			
			continue;
		}

		for (int i = 0; i < 4; ++i) {
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];

			if (0 <= nx && nx < W && 0 <= ny && ny < H && map[ny][nx] != 'X' && d[ny][nx] == INF) {
				que.push(P(nx, ny));
				d[ny][nx] = d[p.second][p.first] + 1;
			}
		}

	}

	return distance;
}

int main(void) {
	input();

	

	CO bfs() E

	return 0;
}