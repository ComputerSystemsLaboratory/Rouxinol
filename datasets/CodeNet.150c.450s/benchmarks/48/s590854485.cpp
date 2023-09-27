#include <iostream>
#include <algorithm>
using namespace std;
int e;

void solve() {
  int minm = 1000000;
  for (int z = 0; z*z*z <= e; z += 1) {
    for (int y = 0; y*y <= e-z*z*z; y += 1) {
      int x = e - z*z*z - y*y;
      if (x < 0) continue;
      int m = x + y + z;
      minm = min(minm, m);
    }
  }
  cout<<minm<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>e, e) {
    solve();
  }
  return 0;
}