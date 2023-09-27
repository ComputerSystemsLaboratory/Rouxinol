#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i != N; ++i) {
    cin >> A[i];
    if (i >= K)
      cout << (A[i-K] < A[i] ? "Yes" : "No") << endl;
  }
}
