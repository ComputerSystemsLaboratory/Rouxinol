#include <iostream>
using namespace std;

int main() {
  int n, mil = 196470;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int y, m, d, ans = mil;
    cin >> y >> m >> d;
    ans -= (y-1)*39*5 + (y-1)/3*5;
    ans -= (m-1)*20;
    if(y%3 != 0) ans += (m-1)/2;
    ans -= d-1;

    cout << ans << endl;
  }
}