#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  cout << (r<=x && x<=W-r && r<=y && y<=H-r ? "Yes" : "No") << endl;
  return 0;
}