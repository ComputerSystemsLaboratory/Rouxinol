#include <iostream>

using namespace std;

int solve(int x, int y) {
  if (x == y)
    return x;

  int l, s;
  l = max(x,y);
  s = min(x,y);
  
  if (l % s == 0) 
    return s;
  return solve(l % s, s);
}

int main() {
  int x, y;
  cin >> x >> y;
  int res = solve(x, y);
  cout << res << endl;
  return 0;
}