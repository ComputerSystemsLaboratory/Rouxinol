#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int X, Y, S;

int tax(int n, int r) { return n * (100 + r) / 100; }

int main(void) {
  while(cin >> X >> Y >> S, X && Y && S) {
    int m = 0;
    REP(i, 1, S) REP(j, 1, S) if(tax(i, X) + tax(j, X) == S) m = max(m, tax(i, Y) + tax(j, Y));
    cout << m << endl;
  }

  return 0;
}