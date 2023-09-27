#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string.h>
#include<string>
#include<functional>
#include<set>
using namespace std;

#define INF 1<<21
#define DIV 1000000007
#define MAX 250000

int table[51][51];
int W, H;

void dfs(int x, int y) {
  table[y][x] = 0;

  for (int dx = -1; dx <= 1; dx++) {
	for (int dy = -1; dy <= 1; dy++) {
	  int nx = x + dx, ny = y + dy;
	  if (0 <= nx&&nx < W && 0 <= ny&&ny < H&&table[ny][nx] == 1)dfs(nx, ny);
	}
  }
  return;
}

int main(){
  while (cin >> W >> H, W || H) {
	int ans = 0;
	memset(table, 0, sizeof(table));
	int t;
	for (int y = 0; y < H; y++) {
	  for (int x = 0; x < W; x++) {
		cin >> table[y][x];
	  }
	}

	for (int y = 0; y < H; y++) {
	  for (int x = 0; x < W; x++) {
		if (table[y][x] == 1) {
		  dfs(x, y);
		  ans++;
		}
	  }
	}
	cout << ans << endl;
  }

}