#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  if(0 <= x - r && x + r <= W && 0 <= y - r && y + r <= H) cout << "Yes";
  else cout << "No";
  cout << endl;
}
