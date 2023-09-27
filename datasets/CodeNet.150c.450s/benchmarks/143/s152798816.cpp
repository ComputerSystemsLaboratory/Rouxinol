// https://atcoder.jp/contests/abc171/tasks/abc171_d

#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

#define REP(i,n)   for(int i=0; i<(int)(n); i++)
#define FOR(i,b,e) for(int i=(b); i<=(int)(e); i++)
#define DEBUG 1
#if DEBUG
  #define _GLIBCXX_DEBUG
  #define DUMP(a) REP(_i, a.size()) cout << a[_i] << (_i + 1 == a.size() ? "\n" : " ")
  #define DUMP2D(b) REP(_j, b.size()) DUMP(b[_j]); cout << endl
#else
  #define DUMP(a)
  #define DUMP2D(b)
#endif

const int N_MAX = 1e5;
const int Q_MAX = 1e5;
const int A_I_MAX = 1e5;
const int B_I_MAX = 1e5;
const int C_I_MAX = 1e5;

int N;
vector<ll> A;
int Q;

ll S;
map<ll, ll> h;

int main() {
  cin >> N;
  A = vector<ll>(N);
  S = 0;
  REP(i, N) {
    cin >> A[i];
    S += A[i];
    h[A[i]]++;
  }

  cin >> Q;
  REP(i, Q) {
    int B, C;
    cin >> B >> C;
    S += (C - B) * h[B];
    h[C] += h[B];
    h[B] = 0;
    cout << S << endl;
  }
}
