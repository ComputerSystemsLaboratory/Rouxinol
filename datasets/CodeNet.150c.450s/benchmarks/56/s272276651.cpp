#include <iostream>
using namespace std;

int main() {
  int n;
  int *a_heap;
  cin >> n;
  a_heap = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> a_heap[i];
  }
  int min = 1000000;
  int max = -1000000;
  long sum = 0;
  for (int i = 0; i < n; i++) {
    if (a_heap[i] > max) {
      max = a_heap[i];
    }
    if (a_heap[i] < min) {
      min = a_heap[i];
    }
    sum += a_heap[i];
  }
  cout << min << " " << max << " " << sum << endl;
  delete[] a_heap;
  return 0;
}