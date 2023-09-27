#include <bits/stdc++.h>
using namespace std;
int toTime(int, int, int);

int main() {
  int n;
  while(cin >> n, n) {
    vector<pair<int, bool> > ts; // *, true : start, *, false : end
    for(int i = 0; i < n; ++i) {
      int h, m, s;
      char c, d;
      cin >> h >> c >> m >> d >> s;
      int st = toTime(h, m, s);
      ts.push_back(make_pair(st, true));
      cin >> h >> c >> m >> d >> s;
      int et = toTime(h, m, s);
      ts.push_back(make_pair(et, false));
    }
    sort(begin(ts), end(ts));
    int nnt = 0, maxnnt = 0;
    for(int i = 0; i < ts.size(); ++i) {
      nnt += ts[i].second * 2 - 1;
      if(i == ts.size() - 1 || ts[i].first != ts[i + 1].first) maxnnt = max(maxnnt, nnt);
    }
    cout << maxnnt << endl;
  }
  return 0;
}

int toTime(int h, int m, int s) {
  return h * 60 * 60 + m * 60 + s;
}