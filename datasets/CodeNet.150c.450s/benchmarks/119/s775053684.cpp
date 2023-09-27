#include <iostream>
using namespace std;
int sea[51][51], w, h;
const int di[8] = {-1, 1, 0, 0, 1, -1, -1, 1};
const int dj[8] = {0, 0, -1, 1, 1, 1, -1, -1};

void dfs(int i, int j) {
  sea[i][j] = 0;
  for (int z = 0; z < 8; z++) {
    int ti = i + di[z], tj = j+ dj[z];
    if (ti < 0 || tj < 0 || ti >= h || tj >=w) continue;
    if (sea[ti][tj]) dfs(ti, tj);
  }
}

void solve() {
  for(int i=0;i<h;i++)
  for(int j=0;j<w;j++)
  cin>>sea[i][j];
  
  int res = 0;
  for(int i=0;i<h;i++)
  for(int j=0;j<w;j++)
  if (sea[i][j] == 1) {
    dfs(i, j); res++;
  }
  
  cout<<res<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>w>>h, w||h) {
    solve();
  }
  return 0;
}