#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int past(int Y, int M, int D) {
  int day = 0;
  REP(i, 1, Y) {
    if(i % 3 == 0) day += 10 * 20;
    else day += 19 * 5 + 20 * 5;
  }
  REP(i, 1, M) {
    if(Y % 3 == 0) {
      day += 20;
    } else {
      if(i % 2 == 1) day += 20;
      else day += 19;
    }
  }
  day += D;
  return day;
}

int main(void) {
  int N; cin >> N;
  int m = past(1000, 1, 1);
  REP(i, 0, N) {
    int Y, M, D; cin >> Y >> M >> D;
    cout << (m - past(Y, M, D)) << endl;
  }

  return 0;
}