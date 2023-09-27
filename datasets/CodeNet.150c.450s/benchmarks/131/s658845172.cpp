#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int L;
string A;
map< string, int > vst;

void solve(void);

int main() {
  while (cin >> A >> L && (A != "0" || L != 0))
    solve();

  return 0;
}

void solve(void) {
  string A0(L, '0'), pre;
  int mini, maxi, diffi, cnt = 0;

  A0.replace(L - A.length(), A.length(), A);
  vst.clear(), vst[A0] = 0;

  pre = A0;
  do {
    string maxs, mins, diffs;
    mins = pre;
    sort(mins.begin(), mins.end());
    maxs = mins;
    reverse(maxs.begin(), maxs.end());

    istringstream iss1(mins), iss2(maxs);
    ostringstream oss;

    iss1 >> mini, iss2 >> maxi, diffi = maxi - mini;
    oss.fill('0'), oss.width(L), oss << diffi, diffs = oss.str(), ++cnt;
    if (vst.count(diffs) > 0) {
      cout << vst[diffs] << " " << diffi << " " << cnt - vst[diffs] << "\n";
      break;
    }
    vst[diffs] = cnt, pre = diffs;
  } while (true);
}