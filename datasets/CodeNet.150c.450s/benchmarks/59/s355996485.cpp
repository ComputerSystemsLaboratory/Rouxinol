#include <iostream>
#include <algorithm>
using namespace std;

int A[100], N;

void insertionSort();
void trace();

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) { cin >> A[i]; }
  
  trace();
  insertionSort();
  
  return 0;
}

// sort
void insertionSort() {
  for (int i = 1; i < N; ++i) {
    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
    trace();
  }
}

// print
void trace() {
  for (int i = 0; i < N; ++i) {
    if (i) { cout << " "; }
    cout << A[i];
  }
  cout << "\n";
}