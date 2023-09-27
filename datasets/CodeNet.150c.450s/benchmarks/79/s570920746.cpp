#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
typedef long long ll;

int N, R, P[50], C[50];
int a[51][50];

int main(void) {
  while(cin >> N>>R, N || R) {
    REP(i, 0, R)cin >>P[i]>>C[i];
    REP(i, 0, N) a[0][i] = N - i;
    REP(i, 0, R){
      REP(j, 0, C[i]) a[i + 1][j] = a[i][P[i] + j - 1];
      REP(j, 0, P[i] - 1) a[i + 1][C[i] + j] = a[i][j];
      REP(j, C[i] + P[i] - 1, N) a[i + 1][j] = a[i][j];
      // REP(j, 0, N) {
      //     cout << a[i + 1][j] << " ";
      // }
      // cout << endl;
    }
    cout << a[R][0] << endl;
  }

  return 0;
}