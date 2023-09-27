#include <iostream>
#include <algorithm>

using namespace std;

/* ?´???´?????¢?????´?????????
int gcd(int x,int y) {
  int n = min(x,y);
  for(int d=n;d>=1;d--)
    if(!(x%d || y%d))
      return d;
  return 0;
}
*/
int gcd(int x, int y) {
    if(x < y) swap(x, y);
    int r;
    while(y > 0) {
      r = x % y;
      x = y;
      y = r;
    }
    return x;
}

int main(void) {
  int x, y;
  cin >> x; cin >> y;
  cout << gcd(x,y) << '\n';
  return 0;
}