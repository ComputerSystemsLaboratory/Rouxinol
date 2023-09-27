#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<string> all;
int h, w;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

typedef pair<int, int> P;

void bfs(int x, int y){
	char c = all[y][x];
	all[y][x] = ' ';
	queue<P> q;
	q.push(P(x, y));
	while (!q.empty()){
		P p = q.front(); q.pop();
		for (int i = 0; i < 4; ++i){
			int tmpx = p.first + dx[i], tmpy = p.second + dy[i];
			if (0 <= tmpx && tmpx < w && 0 <= tmpy && tmpy < h && all[tmpy][tmpx] == c){
				all[tmpy][tmpx] = ' ';
				q.push(P(tmpx, tmpy));
			}
		}
	}
}

void solve(){
	int ans = 0;
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			if (all[i][j] == '@' || all[i][j] == '#' || all[i][j] == '*'){
				bfs(j, i);
				++ans;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	while (cin >> h >> w){
		if (h == 0 && w == 0)
			break;
		all.clear();
		for (int i = 0; i < h; ++i){
			string tmp;
			cin >> tmp;
			all.push_back(tmp);
		}
		solve();
	}
	return 0;
}