#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main() {
  int W, H, x, y, ans, c;
  string s;
  while (cin >> W >> H, W) {
    vector<string> M;
    ans = 0;
    M.push_back(string(W+2, '#'));
    for (int i = 0; i < H; ++i) {
      cin >> s;
      for (int j = 0; j < W; ++j) {
	if (s[j] == '@') {
	  x = i+1;
	  y = j+1;
	  s[j] = '!';
	  break;
	}
      }
      s = '#' + s + '#';
      M.push_back(s);
    }
    M.push_back(string(W+2, '#'));
    queue<vector<int>> que;
    que.push({x, y});
    while (!que.empty()) {
      ++ans;
      x = que.front()[0];
      y = que.front()[1];
      que.pop();
      if (M[x-1][y] == '.') {
	M[x-1][y] = '!';
	que.push({x-1,y});
      }
      if (M[x][y-1] == '.') {
	M[x][y-1] = '!';
	que.push({x,y-1});
      }
      if (M[x+1][y] == '.') {
	M[x+1][y] = '!';
	que.push({x+1,y});
      }
      if (M[x][y+1] == '.') {
	M[x][y+1] = '!';
	que.push({x,y+1});
      }
    }
    cout << ans << endl;
  }
  return 0;
}