#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int cnt;
int m, n;
char map[101][101];
bool vis[101][101];

struct Node {
	int x, y;
	Node () {}
	Node (int X,int Y) {
		x = X; y = Y;
	}
};

int X[] = {1, 0, -1, 0};
int Y[] = {0, -1, 0, 1};

void dfs(Node now) {
	Node nex;
	for (int i=0; i<4; i++) {
		nex = Node(now.x + X[i], now.y + Y[i]);
		if (nex.x < m && nex.x >= 0 && nex.y < n && nex.y >= 0) {
			if (vis[nex.x][nex.y] == false && map[nex.x][nex.y] == map[now.x][now.y]) {
				vis[nex.x][nex.y] = true;
				dfs(nex);
			}
		}
	}
}
 	
int main () {
	while (cin >> m >> n) {
		if (m == 0 && n == 0) break;
		cnt = 0;
		memset(vis,false,sizeof(vis));
		for (int i=0; i<m; i++) {
			cin >> map[i];
		}
		for (int i=0; i<m; i++) {
			for (int j=0; j<n; j++) {
				if (vis[i][j] == false) {
					vis[i][j] = true;
					dfs(Node (i,j));
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}