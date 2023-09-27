#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

#define fi first
#define se second
#define x second
#define y first

typedef pair<int,int> pii;

vector<string> in;
int H, W, N;

int visited[1024][1024] = {0};

int search_length(char s, char g) {
	fill(visited[0], visited[0] + 1024*1024, 0);
	queue<pair<pii, int> > que;
	int vx[] = {1, -1, 0, 0};
	int vy[] = {0, 0, 1, -1};
	for(int i = 0; i < in.size(); i++) {
		for(int j = 0; j < in[0].size(); j++) {
			if(in[i][j] == s) {
				que.push(pair<pii, int>(pii(i, j), 0));
				j = in[i].size();
				i = in.size();
			}
		}
	}
	while(!que.empty()) {
		pair<pair<int,int>, int> tmp;
		tmp = que.front(); que.pop();
		for(int i = 0; i < 4; i++) {
			int x_, y_;
			x_ = tmp.fi.x + vx[i]; y_ = tmp.fi.y + vy[i];
			if(!(x_ < 0 || (int)in[0].size() <= x_ || y_ < 0 || (int)in.size() <= y_)) {
				if(in[y_][x_] == g) {
					return tmp.se + 1;
				}
				if(!visited[y_][x_] && in[y_][x_] != 'X') {
					visited[y_][x_] = 1;
					que.push(pair<pii,int>(pii(y_, x_), tmp.se + 1));
				}
			}
		}
	}
	return -1;
}

int main() {
	cin >> H >> W >> N;
	int ret = 0;
	for(int i = 0; i < H; i++) {
		string tmp;
		cin >> tmp;
		in.push_back(tmp);
	}

	for(int i = 0; i < N; i++) {
		char s, g;
		s = i + '0'; g = i + 1 + '0';
		if(i == 0)
			s = 'S';
		ret += search_length(s, g);
	}
	cout << ret << endl;
	return 0;
}