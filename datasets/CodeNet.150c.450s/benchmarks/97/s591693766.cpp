#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define pb push_back
int n;

struct chip {
  int x, y;
  chip(int ax, int ay):x(ax), y(ay){}
};

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

void solve() {
  int max_x = 0, min_x = 0, max_y = 0, min_y = 0;
  
  vector<chip> cl;
  cl.pb(chip(0, 0));
  for (int i = 0; i < n-1; i += 1) {
    int id, dir, tx, ty;
    cin>>id>>dir;
    tx = cl[id].x + dx[dir];
    ty = cl[id].y + dy[dir];
    cl.pb(chip(tx, ty));
    max_x = max(max_x, tx);
    max_y = max(max_y, ty);
    min_x = min(min_x, tx);
    min_y = min(min_y, ty);
  }
  
  cout<<max_x-min_x + 1<<" "<<max_y-min_y + 1<<endl;  
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}