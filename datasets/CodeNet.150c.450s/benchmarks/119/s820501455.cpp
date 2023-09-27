// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int w, h;
bool F[60][60];

struct point {
  int x, y;
};

void init() {
  fill(&F[0][0], &F[0][0]+60*60, 0);
  for (int i=1; i<=h; i++) {
    for (int j=1; j<=w; j++) {
      int temp;
      scanf("%d", &temp);
      F[i][j] = (bool) temp;
    }
  }
}

int solve() {
  int ans = 0;
  for (int i=1; i<=h; i++) {
    for (int j=1; j<=w; j++) {
      if (F[i][j]) {
	stack<point> S;
	point p = { i, j };
	S.push(p);
	while (! S.empty()) {
	  p = S.top();
	  S.pop();
	  F[p.x][p.y] = false;
	  for (int i=-1; i<=1; i++) {
	    for (int j=-1; j<=1; j++) {
	      point q = { p.x + i , p.y + j };
	      if (F[q.x][q.y]) {
		S.push(q);
	      }
	    }
	  }
	}
	ans++;
      }
    }
  }
  return ans;
}

int main() {
  while(scanf("%d%d", &w, &h) != EOF && w && h) {
    init();
    printf("%d\n", solve());
  }
}