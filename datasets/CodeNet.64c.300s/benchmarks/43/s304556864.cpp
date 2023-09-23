#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int S, T, U;

int main(void) {
  S = 0;
  REP(i, 0, 4) {
    cin >> U;
    S += U;
  }

  T = 0;
  REP(i, 0, 4) {
    cin >> U;
    T += U;
  }

  cout << max(S, T) << endl;

  return 0;
}