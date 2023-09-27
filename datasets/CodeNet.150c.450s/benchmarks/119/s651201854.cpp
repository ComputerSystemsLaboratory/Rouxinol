#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {
  int w, h;
  while(cin >> w >> h, w || h) {
    set<pair<int, int> > blacks;
    for(int y = 0; y < h; ++y) for(int x = 0; x < w; ++x) {
      int d;
      cin >> d;
      if(d) blacks.insert(make_pair(y, x));
    }
    function<void(int, int)> countIslands = [&](int y, int x) {
      if(blacks.count(make_pair(y, x))) {
        blacks.erase(make_pair(y, x));
        int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
        int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};
        for(int i = 0; i < 8; ++i) countIslands(y + dy[i], x + dx[i]);
      }
    };
    int ans = 0;
    while(!blacks.empty()) {
      countIslands((*begin(blacks)).first, (*begin(blacks)).second);
      ++ans;
    }
    cout << ans << endl;
  }
  return 0;
}