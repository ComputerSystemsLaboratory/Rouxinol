#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cnt[4] = {0};
  string s;
  cin >> n;
  while (n--) {
    cin >> s;
    if (s == "AC")
      cnt[0]++;
    else if (s == "WA")
      cnt[1]++;
    else if (s == "TLE")
      cnt[2]++;
    else
      cnt[3]++;
  }
  printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", cnt[0], cnt[1], cnt[2],cnt[3]);

  return 0;
}
