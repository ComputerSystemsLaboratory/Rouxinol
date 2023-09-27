#include <iostream>
#include <vector>
using namespace std;

void print(vector<unsigned> v) {
  for (unsigned i = 0; i < v.size() - 1; i++) {
    cout << v[i] << " ";
  }
  cout << v[v.size() - 1] << endl;
}

int main() {
  unsigned N;
  cin >> N;
  vector<unsigned> A(N);
  for (unsigned n = 0; n < N; n++) {
    cin >> A[n];
  }
  print(A);
  for (unsigned n = 1; n < N; n++) {
    unsigned v = A[n];
    unsigned m = n;
    while (m > 0 && A[m - 1] > v) {
      A[m] = A[m - 1];
      m--;
    }
    A[m] = v;
    print(A);
  }
  return 0;
}