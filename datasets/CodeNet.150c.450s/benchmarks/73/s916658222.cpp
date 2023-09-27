#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
const int NMAX = 200000;

int bit[NMAX + 1], n;

int sum(int i) {
  int s = 0;
  while (i > 0) {
    s += bit[i];
    i = i & (i - 1);
  }
  return s;
}

void add(int i, int x) {
  while (i <= n) {
    bit[i] += x;
    i += i & -i;
  }
}

int sum(int s, int t) {
  return s == 0 ? sum(t) : sum(t) - sum(s - 1);
}

int main() {
  int Q;
  cin >> n >> Q;
  REP(i, Q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      add(x, y);
    } else {
      cout << sum(x, y) << endl;
    }
  }
}