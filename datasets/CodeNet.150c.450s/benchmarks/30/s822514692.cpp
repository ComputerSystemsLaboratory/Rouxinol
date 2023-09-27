#include <iostream>
#define REP(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_N = 100;

int main()
{
  int N, A[MAX_N], minj, cnt;
  cin >> N;
  REP(i, N) cin >> A[i];

  cnt = 0;
  REP(i, N) {
    minj = i;
    REP(j, N) {
      if (j < i) continue;
      if (A[j] < A[minj]) minj = j;
    }
    if (A[i] != A[minj]) {
      swap(A[i], A[minj]);
      cnt++;
    }
  }
  REP(i, N-1) cout << A[i] << ' ';
  cout << A[N-1] << endl;
  cout << cnt << endl;

  return 0;
}