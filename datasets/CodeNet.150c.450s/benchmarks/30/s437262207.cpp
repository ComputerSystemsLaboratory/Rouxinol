#include <iostream>
using namespace std;

int A[100], N;

int selectionSort();
void trace();

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) { cin >> A[i]; }
  
  int count = selectionSort();
  trace();
  cout << count << "\n";
  
  return 0;
}

// sort
int selectionSort() {
  int count = 0;
  for (int i = 0; i < N; ++i) {
    int minv = i;
    for (int j = i + 1; j < N; ++j) {
      if (A[minv] > A[j]){
        minv = j;
      }
    }
    if (minv != i) {
      swap(A[minv], A[i]);
      count++;
    }
  }
  return count;
}

// print
void trace() {
  for (int i = 0; i < N; ++i) {
    if (i) { cout << " "; }
    cout << A[i];
  }
  cout << "\n";
}