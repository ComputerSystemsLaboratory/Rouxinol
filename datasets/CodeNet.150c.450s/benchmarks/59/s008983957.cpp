#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int> A, int S) {
  for (int i = 1; i < S; ++i) {
    int tmp= A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > tmp) {
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = tmp;
    for (vector<int>::iterator it = A.begin(); it != A.end() - 1; ++it) {
      cout << *it << ' ';
    }
    cout << *(A.end() - 1) << endl;
  }
}

int main() {
  int N; cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  for (vector<int>::iterator it = A.begin(); it != A.end() - 1; ++it) {
    cout << *it << ' ';
  }
  cout << *(A.end() - 1) << endl;

  insertion_sort(A, A.size());
}