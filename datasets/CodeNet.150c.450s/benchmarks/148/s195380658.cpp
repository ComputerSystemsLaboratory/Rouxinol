#include <bits/stdc++.h>
using namespace std;

int main () {
      int n;
      cin >> n;
      int ac=0, wa=0, tle=0, re=0;
      for (int i=1; i<=n; i++) {
            char a[5];
            cin >> a;
            if (a[0]=='A') ac++;
            else if (a[0]=='W') wa++;
            else if (a[0]=='T') tle++;
            else if (a[0]=='R') re++;
      }
      cout << "AC x " << ac << endl;
      cout << "WA x " << wa << endl;
      cout << "TLE x " << tle << endl;
      cout << "RE x " << re << endl;
      return 0;
}
