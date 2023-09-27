#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int n, k;
int a[100000];
int s, m;

int main(void) {
  while(cin >> n >> k, !(n == 0 && k == 0)) {
    REP(i, 0, n) {
      cin >> a[i];
    }

    s = 0;
    REP(i, 0, k) {
      s += a[i];
    }

    m = s;
    REP(i, k, n) {
      s += a[i] - a[i - k];
      if(s > m) m = s;
    }

    cout << m << endl;
  }

  return 0;
}