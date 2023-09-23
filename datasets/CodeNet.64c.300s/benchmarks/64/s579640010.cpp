#include <iostream>

using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  int l,s;
  l = max(x,y);
  s = min(x,y);
  while (s != 0) {
    int mod = l % s;
    l = s;
    s = mod;
  }

  cout << l << endl;
  return 0;
}