#include <iostream>
#include <vector>
#include <algorithm>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int A, L, d[6];

void toarray(int a) {
  REP(i, 0, L) {
    d[i] = a % 10;
    a /= 10;
  }
}

int number() {
  int n = 0;
  REP(i, 0, L) n = n * 10 + d[i];
  return n;
}

int find(int n, vector<int> &v) {
  REP(i, 0, v.size()) if(v[i] == n) return i;
  return -1;
}

int main(void) {
  while(cin >> A >> L, A || L) {
    vector<int> v;
    for(int i = 0; true; i++) {
      int idx;
      if((idx = find(A, v)) >= 0) {
        cout << idx << " " << A << " " << (i - idx) << endl;
        break;
      }
      v.push_back(A);
      toarray(A);
      sort(d, d + L);
      int nmin = number();
      reverse(d, d + L);
      int nmax = number();
      A = nmax - nmin;
    }
  }

  return 0;
}