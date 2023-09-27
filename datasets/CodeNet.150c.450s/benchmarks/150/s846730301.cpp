#include <iostream>
#include <vector>
using namespace std;

void trace(const vector<int>& a) {
  for (auto it = a.begin() + 1; it < a.end(); ++it) {
    cout << *it << ((it + 1 != a.end())? " " : "\n");
  }
}

void countingSort(vector<int>& A, vector<int>& B, int k) {
  vector<int> C(k + 1, 0);

  size_t n = A.size() - 1;
  for (size_t j = 1; j <= n; ++j) ++C[A[j]];
  for (int i = 1; i <= k; ++i) C[i] += C[i - 1];

  for (size_t i = n; i != 0; --i) {
    B[C[A[i]]] = A[i];
    --C[A[i]];
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n + 1);
  for (int i = 1; i <= n; ++i) cin >> A[i];
  vector<int> B(n + 1);
  countingSort(A, B, 10000);
  trace(B);
}

