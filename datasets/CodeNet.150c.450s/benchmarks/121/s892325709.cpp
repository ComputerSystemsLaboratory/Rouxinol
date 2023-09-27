// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0118

#include <iostream>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

typedef pair<int, int> point;
int H, W;

bool isvalid(int i, int j) {
  return 0 <= i && i < H && 0 <= j && j < W;
}

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, -1, 0, 1 };

int main() {
  while (cin >> H >> W && H) {
    char L[110][110];
    for (auto i=0; i<H; i++) {
      for (auto j=0; j<W; j++) {
	scanf(" %c", &L[i][j]);
      }
    }
    bool visited[110][110];
    fill(&visited[0][0], &visited[0][0]+110*110, false);
    int res = 0;
    for (auto i=0; i<H; i++) {
      for (auto j=0; j<W; j++) {
	if (!visited[i][j]) {
	  res++;
	  stack<point> S;
	  S.push(make_pair(i, j));
	  while (!S.empty()) {
	    int x = S.top().first;
	    int y = S.top().second;
	    S.pop();
	    if (!visited[x][y]) {
	      visited[x][y] = true;
	      for (auto k=0; k<4; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if (isvalid(nx, ny) && !visited[nx][ny] 
		    && L[nx][ny] == L[i][j]) {
		  S.push(make_pair(nx, ny));
		}
	      }
	    }
	  }
	}
      }
    }
    printf("%d\n", res);
  }
}