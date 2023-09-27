#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i)
      cin >> A[i] >> B[i];
    int scoreA = 0, scoreB = 0;
    for (int i = 0; i < n; ++i) {
      if (A[i] == B[i])
        scoreA += A[i], scoreB += B[i];
      else if (A[i] < B[i])
        scoreB += A[i] + B[i];
      else
        scoreA += A[i] + B[i];
    }
    cout << scoreA << " " << scoreB << endl;
  }
}