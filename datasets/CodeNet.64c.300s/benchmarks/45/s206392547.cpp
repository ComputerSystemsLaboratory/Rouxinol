#include <iostream>

using namespace std;

#define REP(i, n) for(int (i) = 0; i < (n); i++)

int nextInt() { int d; cin >> d; return d; }

int main() {
  while (true) {
    int N = nextInt();
    int M = nextInt() - 1;
    int P = nextInt();

    if (N + M + P == -1) break;

    int sum = 0;
    int xm = 0;
    REP(i, N) {
      int x = nextInt();
      sum += x;
      if (i == M) xm = x;
    }
    if (xm == 0) {
      cout << 0 << endl;
    } else {
      cout << sum * (100 - P) / xm << endl;
    }
   
  }
  return 0;
}