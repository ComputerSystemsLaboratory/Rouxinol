#include<iostream>
using namespace std;
const int MAX = 100;

void insertionSort(int A[], int N);
void showArray(int A[], int N);

int main() {
  int A[MAX], n;

  cin >> n;

  for ( int i = 0; i < n; i++ ) cin >> A[i];
  
  showArray(A, n);
  insertionSort(A, n);

  return 0;
}

void insertionSort(int A[], int N) {
  for ( int i = 1; i < N; i++ ) {
    int j = i - 1, v = A[i];

    while ( j >= 0 && A[j] > v ) {
      A[j + 1] = A[j];
      j--;
      A[j + 1] = v;
    }
  showArray(A, N);
  }

  return;
}

void showArray(int A[], int N) {
  cout << A[0];
  for ( int i = 1; i < N; i++) cout << " " << A[i];
  cout << endl;
  return;
}