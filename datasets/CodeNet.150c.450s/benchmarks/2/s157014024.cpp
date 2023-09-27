#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static void inputArray(int A[], int num) {
  for (int i = 0; i < num; i++) {
    cin >> A[i]; 
  }
}

static void printArray(int A[], int num, int q) {
  for (int i = 0; i < num; i++) {
    cout << (i != 0 ? " " : "");
    if (i != q) {
      cout << A[i];
    } else {
      cout << '[' << A[i] << ']';
    }
  }
  cout << endl; 
}

static int partition(int A[], int p, int r) {
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
  int n;
  cin >> n;

  vector<int> A(n);
  inputArray(&A[0], n);
  
  int q = partition(&A[0], 0, n - 1);
  printArray(&A[0], n, q);
    
  return 0;
}

