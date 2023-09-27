#include <iostream>
#include <queue>
#include <string>
#include <set>
using namespace std;

const int MAX_H = 1005;
const int MAX_W = 1005;

string all[MAX_H];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int h, w;
int n;
int sx, sy;
typedef pair<int ,int> P;

int bfs(char target){
	set<P> s;
	queue<P> q1;
	queue<int> q2;
	q1.push(P(sy, sx));
	s.insert(P(sy, sx));
	q2.push(0);
	while (!q1.empty()){
		P p = q1.front(); q1.pop();
		int t = q2.front(); q2.pop();
		//cout << p.first << " " << p.second <<" "<<t<< endl;
		for (int i = 0; i < 4; ++i){
			int y = p.first + dy[i], x = p.second + dx[i];
			if (x >= 0 && x < w &&y >= 0 && y < h && all[y][x] != 'X'){
				if (s.count(P(y,x))){
					continue;
				}
				if (all[y][x] == target){
					all[y][x] = '.';
					sx = x, sy = y;
					return t + 1;
				}
				else{
					q1.push(P(y, x));
					q2.push(t + 1);
					s.insert(P(y, x));
				}
			}
		}
	}
}

void solve(){
	int ans = 0;
	char t = '1';
	for (int i = 0; i < n;++i){
		ans += bfs(t);
		++t;
	}
	cout << ans << endl;
}

int main(){
	cin >> h >> w >> n;
	for (int i = 0; i < h; ++i){
		cin >> all[i];
		for (int j = 0; j < w; ++j){
			if (all[i][j] == 'S'){
				sx = j, sy = i;
				all[i][j] = '.';
			}
		}
	}
	solve();
	return 0;
}