#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 100000;

int partition(int A[], int p, int r) {
  // A[p ... q-1] [q] [q+1 ... r]
  int x = A[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main() {
  int data[MAX];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> data[i];

  int pivot = partition(data, 0, n - 1);

  cout << data[0];
  for (int i = 1; i < n; i++) {
    cout << " ";
    if (i == pivot)
      cout << "[";
    cout << data[i];
    if (i == pivot)
      cout << "]";
  }
  cout << endl;
}