#include <bits/stdc++.h>

using namespace std;
using int64 = long long;

constexpr int DEBUG = 0;

template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
  int len = v.size();
  s << "[";
  for (int i = 0; i < len; i++) {
    if (i > 0) s << ", ";
    s << v[i];
  }
  s << "]";
  return s;
}

int RankOfF2Vectors(const vector<int64>& input_xs) {
  vector<int64> xs(input_xs.begin(), input_xs.end());
  sort(xs.begin(), xs.end());
  reverse(xs.begin(), xs.end());
  for (int k = 59; k >= 0; k--) {
    for (int i = 0; i < xs.size(); i++) {
      if (xs[i] >= (1LL << (k + 1))) {
        continue;
      } else if (xs[i] >= (1LL << k)) {
        // xs[i] is an axis.
        for (int j = i + 1; j < xs.size(); j++) {
          if (xs[j] >= (1LL << k)) {
            xs[j] ^= xs[i];
          }
        }
        sort(xs.begin(), xs.end());
        reverse(xs.begin(), xs.end());
        // cout << "axis: " << xs[i] << endl;
        // cout << "xs: " << xs << endl;
        break;
      } else {
        break;
      }
    }
  }

  int count = 0;
  for (int64 x : xs) {
    if (x > 0) count++;
  }
  return count;
}

int Solve() {
  int n;
  cin >> n;
  vector<int64> as(n);
  for (int i = 0; i < n; i++) {
    cin >> as[i];
  }
  string s;
  cin >> s;

  vector<int64> xs;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == '0') {
      xs.push_back(as[i]);
    } else {
      int r1 = RankOfF2Vectors(xs);
      vector<int64> ys(xs.begin(), xs.end());
      ys.push_back(as[i]);
      int r2 = RankOfF2Vectors(ys);
      if (r2 > r1) return 1;
    }
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  // cout << RankOfF2Vectors({6, 4}) << endl;
  // cout << RankOfF2Vectors({6, 4, 2}) << endl;
  // cout << RankOfF2Vectors({1, 5, 9, 8, 1}) << endl;

  int num_cases;
  cin >> num_cases;
  for (int i = 0; i < num_cases; i++) {
    cout << Solve() << endl;
  }
}