#include <bits/stdc++.h>

using namespace std;

#define loop(n) for(int lp=0; lp<(n); lp++)
#define ascent(i, a, b)  for(int (i)=(a); (i)<(b); (i)++)
#define descent(i, a, b) for(int (i)=(a); (i)<(b); (i)--)

int main() {
  int n;
  cin >> n;

  loop(n) {
    int y, m, d;
    cin >> y >> m >> d;

    int ans = 196471;
    if(y%3 == 0) {
      ans -= (m-1)*20+d;
    }
    else {
      ans -= d;
      for(int i = m-1; i > 0; i --) {
	if(i%2 == 0) { ans -= 19; }
	else { ans -= 20; }
      }
    }

    for(int i = y-1; i > 0; i --) {
      if(i%3 == 0) {
	ans -= 20*10;
      }
      else {
	ans -= 20*5+19*5;
      }
    }

    cout << ans << endl;
  }
  return 0;
}