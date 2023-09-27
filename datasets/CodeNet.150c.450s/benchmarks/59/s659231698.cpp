#include <iostream>
static const int READMAX = 100;
using namespace std;

void read_stdin(int (&array)[READMAX], int N) {
  for (int i = 0; i < N; ++i) {
    cin >> array[i];
  }
}

void printArray(int (&array)[READMAX], int N) {
  for (int i = 0; i < N - 1; ++i) {
    cout << array[i] << " ";
  }
  cout << array[N - 1] << endl;
}

void insertionSort(int (&A)[READMAX], int N) {
  for (int i = 1; i < N; ++i) {
    int key = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > key) {
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = key;
    printArray(A, N);
  }
}

int main() {
  int arr[READMAX];
  int N;
  cin >> N;
  read_stdin(arr, N);
  printArray(arr, N);
  insertionSort(arr, N);
  return 0;
}
