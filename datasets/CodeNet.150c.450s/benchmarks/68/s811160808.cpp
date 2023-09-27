#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 2000000;
using namespace std;

int main() {
  int N;
  while (cin >> N && N) {
    std::vector<int> A(N);
    REP(i, N) { cin >> A[i]; }
    sort(A.begin(), A.end());
    int ans = A[1] - A[0];
    REP(i, N - 1) {
      ans = min(ans, A[i + 1] - A[i]);
    }
    cout << ans << endl;
  }
}