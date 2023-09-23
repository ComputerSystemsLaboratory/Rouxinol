#include <iostream>
using namespace std;
int main() {
  int N, A[100];
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  
  int count = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = N - 1; j > i; --j) {
      if (A[j] < A[j-1]) {
        int tmp = A[j];
        A[j] = A[j-1];
        A[j-1] = tmp;
        ++count;
      }
    }
  }
  
  for (int i = 0; i < N; ++i) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << count << endl;
}