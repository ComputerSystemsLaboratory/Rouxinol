#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

vector<string> split(const string &s, char delim) {
  vector<string> elems;
  stringstream ss(s);
  string item;
  while (getline(ss, item, delim)) {
    if (!item.empty()) {
      elems.push_back(item);
    }
  }
  return elems;
}

int to_seconds(vector<string> t) {
  int h = atoi(t[0].c_str()) * 3600;
  int m = atoi(t[1].c_str()) * 60;
  int s = atoi(t[2].c_str());
  return h + m + s;
}

const int MAX_M = 24 * 60 * 60;
int sum[MAX_M];

int main() {
  while (1) {
    int n;
    cin >> n;
    if (n == 0) return 0;
    rep(i, MAX_M) sum[i] = 0;
    rep(i, n) {
      string a, b;
      cin >> a >> b;
      int dep = to_seconds(split(a, ':'));
      int arr = to_seconds(split(b, ':'));
      sum[dep]++;
      if (arr < MAX_M) sum[arr]--;
    }
    rep(i, MAX_M - 1) sum[i + 1] += sum[i];
    int ans = 0;
    rep(i, MAX_M) ans = max(ans, sum[i]);
    cout << ans << endl;
  }
  return 0;
}
