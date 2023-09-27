#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int, int> Pii;

const ll mod = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int t;
  cin >> t;
  vector<int> n(t);
  vector<vector<ull> > a(t);
  vector<string> s(t);
  for (int i = 0; i < t; i++) {
    cin >> n[i];
    a[i] = vector<ull>(n[i]);
    for (auto &x: a[i]) cin >> x;
    cin >> s[i];
  }

  vector<int> ans(t);
  for (int i = 0; i < t; i++) {
    vector<ull> b, c;
    for (int j = 0; j < n[i]; j++) {
      if (s[i][j] == '0') b.push_back(a[i][j]);
    }
    reverse(b.begin(), b.end());
    bool good = true;
    for (int j = 0; j < n[i]; j++) {
      if (s[i][j] == '0') {
        b.pop_back();
        continue;
      }
      ull target = a[i][j];
      ull now = 0;
      auto b_temp = b;
      for (int k = 63; k >= 0; k--) {
        int pivot = -1;
        for (int l = 0; l < (int) b_temp.size(); l++) {
          if (pivot == -1) {
            if (b_temp[l] & (1ULL << k)) {
              pivot = l;
              if ((target & (1ULL << k)) != (now & (1ULL << k))) {
                now ^= b_temp[pivot];
              }
            }
          }
          else {
            if (b_temp[l] & (1ULL << k)) {
              b_temp[l] ^= b_temp[pivot];
            }
          }
        }
        if (pivot != -1) b_temp[pivot] = 0;
        if ((target & (1ULL << k)) != (now & (1ULL << k))) {
          good = false;
          break;
        }
      }
      if (!good) break;
    }
    if (good) ans[i] = 0;
    else ans[i] = 1;
  }

  for (auto &x: ans) cout << x << endl;

  return 0;
}
