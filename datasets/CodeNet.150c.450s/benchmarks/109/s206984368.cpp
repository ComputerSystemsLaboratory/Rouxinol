#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
int main() {
  int n, ans, k, t[6];
  vector< pair<int, int> > T;
  while (cin >> n, n) {
    for (int i = 0; i < n; ++i) {
      scanf("%d:%d:%d %d:%d:%d",&t[0],&t[1],&t[2],&t[3],&t[4],&t[5]);
      T.push_back(make_pair(t[0]*3600+t[1]*60+t[2], 1));
      T.push_back(make_pair(t[3]*3600+t[4]*60+t[5], -1));
    }
    ans = 0;
    k = 0;
    sort(T.begin(), T.end());
    for (int i = 0; i < 2*n; ++i) {
      k += T[i].second;
      ans = max(ans, k);
    }
    cout << ans << endl;
    T.erase(T.begin(), T.end());
  }
  return 0;
}