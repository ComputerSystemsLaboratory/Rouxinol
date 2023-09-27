#include <bits/stdc++.h>

#define rep(i, n) for(int i=0; i < (int)n; i++)

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

void toS(int *d) {
  int dt[6];
  rep(i, 6) dt[i] = d[i];
  d[0] = dt[4];
  d[1] = dt[0];
  d[2] = dt[2];
  d[3] = dt[3];
  d[4] = dt[5];
  d[5] = dt[1];
}

void toN(int *d) {
  int dt[6];
  rep(i, 6) dt[i] = d[i];
  d[0] = dt[1];
  d[1] = dt[5];
  d[2] = dt[2];
  d[3] = dt[3];
  d[4] = dt[0];
  d[5] = dt[4];
}

void toW(int *d) {
  int dt[6];
  rep(i, 6) dt[i] = d[i];
  d[0] = dt[2];
  d[1] = dt[1];
  d[2] = dt[5];
  d[3] = dt[0];
  d[4] = dt[4];
  d[5] = dt[3];
}

void toE(int *d) {
  int dt[6];
  rep(i, 6) dt[i] = d[i];
  d[0] = dt[3];
  d[1] = dt[1];
  d[2] = dt[0];
  d[3] = dt[5];
  d[4] = dt[4];
  d[5] = dt[2];
}

void turnR(int *d) {
  int dt[6];
  rep(i, 6) dt[i] = d[i];
  d[0] = dt[0];
  d[1] = dt[3];
  d[2] = dt[1];
  d[3] = dt[4];
  d[4] = dt[2];
  d[5] = dt[5];
}

int main(void) {
  int d[6]={0};
  rep(i, 6) cin >> d[i];

  int q;
  cin >> q;

  int top, front;
  rep(i, q) {
    cin >> top >> front;

    if(d[2] == top) toW(d);
    else if(d[3] == top) toE(d);
    rep(j, 6) {
      if(d[0] != top) toS(d);
    }

    rep(j, 6) {
      if(d[1] != front) turnR(d);
    }

    cout << d[2] << endl;
  }
}

