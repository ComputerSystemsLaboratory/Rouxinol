#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Point {
	int x,y;
};

bool map[50][50];
const int dx[8] = {1,1,0,-1,-1,-1,0,1};
const int dy[8] = {0,1,1,1,0,-1,-1,-1};
int w,h;

void bfs(int x,int y) {

	queue<Point> q;
	Point p,p2;
	p.x = x;
	p.y = y;

	q.push(p);
	map[p.x][p.y] = false;
	while(!q.empty()) {
		p = q.front();
		q.pop();

		for(int i = 0;i < 8;i++) {
			p2.x = p.x + dx[i];
			p2.y = p.y + dy[i];

			if(p2.x < 0 || p2.x >= w) continue;
			if(p2.y < 0 || p2.y >= h) continue;

			if(map[p2.x][p2.y]) {
				q.push(p2);
				map[p2.x][p2.y] = false;
			}
		}
	}
}

int main() {

	while(cin >> w >> h && !(w == 0 && h == 0)) {
		for(int y = 0;y < h;y++) {
			for(int x = 0;x < w;x++) cin >> map[x][y];
		}
		int ct = 0;
		for(int y = 0;y < h;y++) {
			for(int x = 0;x < w;x++) {
				if(map[x][y]) {
					ct++;
					bfs(x,y);
				}
			}
		}
		cout << ct << endl;
	}

}