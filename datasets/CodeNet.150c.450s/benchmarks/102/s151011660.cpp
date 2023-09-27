#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<string.h>
#include<functional>
using namespace std;

#define INF 1<<21
#define DIV 1000000007

typedef pair<int, int>P;


int w, h;
int cnt;
char f[21][21];
int dx[] = { 1,-1,0,0 }, dy[] = { 0,0,1,-1 };

void rec(int x, int y) {
  f[y][x] = '#';
  cnt++;

  for (int i = 0; i < 4; i++) {
	int nx = x + dx[i];
	int ny = y + dy[i];

	if (nx <= 0 || w < nx || ny <= 0 || h < ny||f[ny][nx]!='.')continue;

	rec(nx, ny);
  }
}

int main(){
  while (cin >> w >> h,(w || h)) {
	int sx, sy;
	cnt = 0;
	for (int y = 1; y <= h; y++) {
	  for (int x = 1; x <= w; x++) {
		cin >> f[y][x];
		if (f[y][x] == '@') {
		  sx = x;
		  sy = y;
		}
	  }
	}
	rec(sx, sy);
	cout << cnt << endl;
  }
}