#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int N;
int sum[2000];

int main(void) {
  REP(i, 0, 1001) sum[i] = i;
  REP(i, 1, 1001) sum[i] += sum[i - 1];

  while(cin >> N, N) {
    int ans = 0;
    REP(i, 0, N) REP(j, i + 1, N) {
      if(sum[j] - sum[i] == N) ans++;
    }
    cout << ans << endl;
  }

  return 0;
}