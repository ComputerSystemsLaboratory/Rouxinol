#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
int calc(int a, int tax) {
  return a*(tax+100)/100;
}

signed main() {
  int x, y, s;
  while (cin>>x>>y>>s,x+y+s!=0) {
    // わ　た　し　は　ご　さ　を　ゆ　る　さ　な　い
    //double tax1 = (x+100)/100.;
    //double tax2 = (y+100)/100.;
    int ans = 0;
    for (int a = 1; a < s; a++) {
      for (int b = 1; b < s; b++) {
        if (calc(a,x)+calc(b,x)==s) {
          ans = max(ans, calc(a,y)+calc(b,y));
        }
      }
    }
    cout << ans << endl;
  }
}

