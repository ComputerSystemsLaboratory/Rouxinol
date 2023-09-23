#include <iostream>
using namespace std;

int A[100], N;

int bubbleSort();
void trace();

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) { cin >> A[i]; }
  
  int count = bubbleSort();
  trace();
  cout << count << "\n";
  
  return 0;
}

// sort
int bubbleSort() {
  int count = 0;
  unsigned char flag = 1;
  for (int i = 0; flag; ++i) {
    flag  = 0;
    for (int j = N - 1; j >= i + 1; --j) {
      if (A[j] < A[j - 1]) {
        flag = 1;
        swap(A[j], A[j - 1]);
        count++;
      }
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