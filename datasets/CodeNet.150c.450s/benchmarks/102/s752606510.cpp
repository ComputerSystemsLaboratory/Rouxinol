#include <iostream>
#include <vector>
#include <functional>
#include <set>
using namespace std;

int main() {
  int h, w;
  while(cin >> w >> h, w || h) {
    vector<vector<bool> > qfield(h, vector<bool>(w)); // black: true, red: true
    int starty, startx;
    for(int y = 0; y < h; ++y) for(int x = 0; x < w; ++x) {
      char c;
      cin >> c;
      qfield[y][x] = (c == '#' ? false : true);
      if(c == '@') {
        starty = y;
        startx = x;
      }
    }
    set<pair<int, int> > countedPoses;
    function<int(int, int)> tileCount = [&](int y, int x) {
      int rtn = 0;
      if(y >= 0 && y < h && x >= 0 && x < w && qfield[y][x] && countedPoses.count(make_pair(y, x)) == 0) {
        countedPoses.insert(make_pair(y, x));
        int dy[] = {0, 1, 0, -1};
        int dx[] = {1, 0, -1, 0};
        for(int i = 0; i < 4; ++i) rtn += tileCount(y + dy[i], x + dx[i]);
        ++rtn;
      }
      return rtn;
    };
    cout << tileCount(starty, startx) << endl;
  }
  return 0;
}