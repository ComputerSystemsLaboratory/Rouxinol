#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int N, M, P, A[100];
int sum;

int main(void) {
  while(cin >> N >> M >> P, N || M || P) {
    REP(i, 0, N) cin >> A[i];

    sum = 0;
    REP(i, 0, N) sum += A[i];

    if(A[M - 1] > 0) {
      int ans = (double) 100 * sum * (100 - P) / (100 * A[M - 1]);
      cout << ans << endl;
    } else {
      cout << 0 << endl;
    }
  }
  
  return 0;
}