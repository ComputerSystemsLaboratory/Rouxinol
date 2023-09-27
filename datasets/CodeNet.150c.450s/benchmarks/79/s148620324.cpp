#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, r;
  while (cin >> n >> r && n && r) {
    vector<int> card(n);
    vector<int> tmp(n);

    REP(i, n) card[i] = n - i;
    REP(i, r) {
      int p, c;
      cin >> p >> c;
      REP(j, n) tmp[j] = card[j];
      REP(j, c) tmp[j] = card[p - 1 + j];
      REP(j, p - 1) tmp[c + j] = card[j];
      REP(j, n) card[j] = tmp[j];
    }
    cout << card[0] << endl;
  }
  return 0;
}

