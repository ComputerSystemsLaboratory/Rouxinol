#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<string.h>
#include<set>
#include<functional>
using namespace std;

#define INF 1<<21
#define MOD 1000000007

char field[25][25];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int W, H;
int ans;

void dfs(int x, int y) {
  field[y][x] = '#';
  ans++;
  for (int i = 0; i < 4; i++) {
	int nx = x + dx[i], ny = y + dy[i];
	if (1 <= nx&&nx <= W && 1 <= ny&&ny <= H&&field[ny][nx] == '.')dfs(nx, ny);
  }
  return;
}

int main() {
  while (1) {
	cin >> W >> H;
	if (H == 0 && W == 0)return 0;
	int sx, sy;
	memset(field, 0, sizeof(field));
	ans = 0;
	for (int i = 1; i <= H; i++) {
	  for (int j = 1; j <= W; j++) {
		cin >> field[i][j];
		if (field[i][j] == '@') {
		  sy = i;
		  sx = j;
		}
	  }
	}
	dfs(sx, sy);
	cout << ans << endl;
  }

}