#include <iostream>
#include <algorithm>
using namespace std;

int N, A[200000];

int solve(void) {
  auto maxp = A[1] - A[0];
  auto minr = min(A[0], A[1]);
  for (auto i = 2; i < N; i++) {
    maxp = max(maxp, A[i] - minr);
    minr = min(minr, A[i]);
  }
  return maxp;
}

int main(void){
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  cout << solve() << endl;
  
  return 0;
}