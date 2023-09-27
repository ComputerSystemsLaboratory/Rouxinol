#line 1 "/mnt/c/Users/leafc/dev/compro/lib/template.hpp"


#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define coutd(n) cout << fixed << setprecision(n)
#define ll long long int
#define vl vector<ll>
#define vi vector<int>
#define MM << " " <<

using namespace std;

template <class T> void say(bool val, T yes = "Yes", T no = "No") { cout << (val ? yes : no) << endl; }

template <class T> void chmin(T &a, T b) {
  if (a > b)
    a = b;
}

template <class T> void chmax(T &a, T b) {
  if (a < b)
    a = b;
}


#line 2 "tmp.cpp"

int calcRow(vi &v) {
  REP(i, 3) {
    if (v[i] == -1)
      continue;
    int cnt = 1;
    for (int j = 1; i + j < 5; j++) {
      if (v[i] == v[i + j]) {
        cnt++;
      } else {
        if (cnt >= 3) {
          int ret = cnt * v[i];
          REP(k, j) { v[i + k] = -1; }
          return ret;
        }
        cnt = 0;
        break;
      }
    }
    if (cnt != 0) {
      int ret = cnt * v[i];
      FOR(k, i, 5) v[k] = -1;
      return ret;
    }
  }
  return 0;
}

void calcCol(vector<vi> &cell, int h) {
  REP(j, 5) {
    for (int i = h - 1; i > 0; i--) {
      if (cell[i][j] == -1) {
        for (int above = i - 1; above >= 0; above--) {
          if (cell[above][j] != -1) {
            cell[i][j] = cell[above][j];
            cell[above][j] = -1;
            break;
          }
        }
      }
    }
  }
}

void print(vector<vi> &cell, int h) {
  cout << endl;
  REP(i, h) {
    REP(j, 5) { cout << cell[i][j] << (j == 4 ? "\n" : " "); }
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int h;
    cin >> h;
    if (h == 0)
      break;
    vector<vi> cell(h, vi(5, 0));
    int ans = 0;
    REP(i, h) {
      REP(j, 5) { cin >> cell[i][j]; }
    }

    bool changed = true;
    while (changed) {
      changed = false;
      REP(i, h) {
        int p = calcRow(cell[i]);
        if (p != 0)
          changed = true;
        ans += p;
      }
      calcCol(cell, h);
    }
    cout << ans << endl;
  }
  return 0;
}

