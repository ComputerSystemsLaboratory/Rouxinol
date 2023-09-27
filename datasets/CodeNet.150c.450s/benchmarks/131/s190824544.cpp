//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int make_number(vector<int> &a, int l) {
  int res = 0;
  for (int ll=l-1; ll>=0; --ll) {
    res += a[l-ll-1] * pow(10, ll);
  }
  return res;
}

int main() {
  int a0_raw, l, d;
  vector<int> a, a0;

  int i, j;
  int ak_raw;


  while (cin >> a0_raw >> l, a0_raw || l) {
    a0.resize(0); a.resize(0);
    bool reached = false;

    for (int ll=l-1; ll>=0; --ll) {
      d = a0_raw / pow(10, ll);
      a0_raw -= d * pow(10, ll);
      a0.push_back(d);
    }

    a.push_back(make_number(a0, l));

    while (1) {
      sort(a0.begin(), a0.end());
      int amin = make_number(a0, l);

      reverse(a0.begin(), a0.end());
      int amax = make_number(a0, l);

      a0_raw = amax - amin;
      a.push_back(a0_raw);

      i = a.size() - 1;
      rep (j_, i) {
        if (a[i] == a[j_]) {
          j = j_; reached = true;
          break;
        }
      }

      if (reached) break;

      a0.resize(0);
      for (int ll=l-1; ll>=0; --ll) {
        d = a0_raw / pow(10, ll);
        a0_raw -= d * pow(10, ll);
        a0.push_back(d);
      }
    }

    cout << j << " " << a0_raw << " " << i-j << endl;
  }

  return 0;
}