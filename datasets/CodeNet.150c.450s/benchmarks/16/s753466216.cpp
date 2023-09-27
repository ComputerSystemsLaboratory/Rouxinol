#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  stack<int> stk;
  int area = 0;
  vector<pair<int, int> > lakes;
  int beg = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '\\') {
      stk.push(i);
      if (area > 0) {
        lakes.push_back(make_pair(beg, area));
        area = 0;
        beg = -1;
      }
    }
    else if (s[i] == '/') {
      if (stk.empty()) {
        continue;
      }
      beg = stk.top(); stk.pop();
      area += (i - beg + 1) - 2 + 1;
    }
  }
  if (area > 0) {
    lakes.push_back(make_pair(beg, area));
  }
  int nlakes = lakes.size();
  int sum = 0;
  for (int i = nlakes - 1; i >= 0; --i) {
    for (int j = i - 1; j >= 0; --j) {
      if (lakes[j].second == 0) { continue; }
      if (lakes[i].first <= lakes[j].first) {
        lakes[i].second += lakes[j].second;
        lakes[j].second = 0;
      }
    }
    sum += lakes[i].second;
  }
  int cnt = 0;
  for (int i = 0; i < nlakes; ++i) {
    if (lakes[i].second != 0) { ++cnt; }
  }
  fprintf(stdout, "%d\n", sum);
  fprintf(stdout, "%d", cnt);
  for (int i = 0; i < nlakes; ++i) {
    if (lakes[i].second != 0) {
      fprintf(stdout, " %d", lakes[i].second);
    }
  }
  fprintf(stdout, "\n");
  return 0;
}