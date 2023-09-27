#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
  int w, h, s, t, x, y, ans;
  queue<vector<int>> que;
  while (cin >> w >> h, w) {
    ans = 0;
    vector< vector<int> > m(h+2, vector<int>(w+2, 0));
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
	cin >> m[i+1][j+1];
      }
    }
    s = 0; t = 0;
    while (s != h+1 || t != w+1) {
      if (!m[s][t]) {
	if (t < w+1) ++t;
	else {
	  t = 0;
	  ++s;
	}
      } else {
	que.push({s, t});
	m[s][t] = 0;
	while (!que.empty()) {
	  x = que.front()[0];
	  y = que.front()[1];
	  que.pop();
	  if (m[x-1][y]) {
	    m[x-1][y] = 0;
	    que.push({x-1, y});
	  }
	  if (m[x+1][y]) {
	    m[x+1][y] = 0;
	    que.push({x+1, y});
	  }
	  if (m[x][y-1]) {
	    m[x][y-1] = 0;
	    que.push({x, y-1});
	  }
	  if (m[x][y+1]) {
	    m[x][y+1] = 0;
	    que.push({x, y+1});
	  }
	  if (m[x+1][y+1]) {
	    m[x+1][y+1] = 0;
	    que.push({x+1, y+1});
	  }
	  if (m[x+1][y-1]) {
	    m[x+1][y-1] = 0;
	    que.push({x+1, y-1});
	  }
	  if (m[x-1][y+1]) {
	    m[x-1][y+1] = 0;
	    que.push({x-1, y+1});
	  }
	  if (m[x-1][y-1]) {
	    m[x-1][y-1] = 0;
	    que.push({x-1, y-1});
	  }
	}
	++ans;
      }
    }
    cout << ans << endl;
    m.erase(m.begin(), m.end());
  }
  return 0;
}