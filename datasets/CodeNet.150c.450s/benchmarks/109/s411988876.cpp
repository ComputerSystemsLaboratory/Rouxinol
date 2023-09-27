#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
int main() {
  int n, ans, k;
  string s, t;
  vector< pair<string, int> > T;
  while (cin >> n, n) {
    for (int i = 0; i < n; ++i) {
      cin >> s >> t;
      T.push_back(make_pair(s, 1));
      T.push_back(make_pair(t, -1));
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