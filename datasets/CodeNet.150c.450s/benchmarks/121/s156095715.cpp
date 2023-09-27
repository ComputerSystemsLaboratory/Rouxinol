#include<iostream>
using namespace std;

const int max_v = 101;
char fruit[max_v][max_v];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int R, L, res;
char temp;
void dfs(int x,int y) {
	fruit[x][y] = '.';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if ((0 <= nx&&nx < R) && (0 <= ny&&ny < L) && fruit[nx][ny] == temp)
			dfs(nx,ny);
	}
}

int main() {
	while (cin >> R >> L&&R != 0 && L != 0) {
		res = 0;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < L; j++) {
				cin >> fruit[i][j];
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < L; j++) {
				if (fruit[i][j] != '.') {
					temp = fruit[i][j];
					dfs(i, j);
					res++;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}