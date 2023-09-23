#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int n;
long M, m, s;

int main(void) {
  cin >> n;

  M = -1000000;
  m =  1000000;
  s = 0;

  REP(i, 0, n) {
    long a;
    cin >> a;
    M = max(M, a);
    m = min(m, a);
    s += a;
  }

  cout << m << " " << M << " " << s << endl;

  return 0;
}