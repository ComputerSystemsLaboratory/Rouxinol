#include <iostream>
#define REP(i, a, n) for(int i = (a); i <= (n); i++)
using namespace std;

const int M = 1000000;
int A, D, N;
bool p[M + 1];

int main(void) {
  REP(i, 1, M) p[i] = true;
  p[1] = false;
  REP(i, 2, M) if(p[i]) for(int j = i * 2; j <= M; j += i) p[j] = false;

  while(cin >> A >> D >> N, A) {
    int v = A;
    for(int cnt = 0; cnt < N; v += D) {
      if(p[v]) cnt++;
      if(cnt == N) break;
    }
    cout << v << endl;
  }

  return 0;
}