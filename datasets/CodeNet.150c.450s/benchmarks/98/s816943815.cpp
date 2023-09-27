#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int N, M, S1[100], S2[100];

int main(void) {
  while(cin >> N >> M, N && M) {
    int sum1 = 0, sum2 = 0;
    REP(i, 0, N) cin >> S1[i], sum1 += S1[i];
    REP(i, 0, M) cin >> S2[i], sum2 += S2[i];

    int p1 = 100000000, p2 = 100000000;
    REP(i, 0, N) REP(j, 0, M) {
      if(sum1 - S1[i] + S2[j] == sum2 + S1[i] - S2[j]) {
        if(p1 + p2 > S1[i] + S2[j]) {
          p1 = S1[i];
          p2 = S2[j];
        }
      }
    }

    if(p1 + p2 >= 100000000) {
      cout << -1 << endl;
    } else {
      cout << p1 << " " << p2 << endl;
    }
  }

  return 0;
}