#include <iostream>

using namespace std;

int N;
int* A;

void print_array(int* arr) {
    cout << arr[0];
    for (int k = 1; k < N; k++) {
      cout << " " << arr[k];
    }
    cout << endl;
}

void solve() {
  print_array(A);

  for (int i = 1; i < N; i++) {
    int key = A[i];
    int j = i - 1;
    while(j >= 0 && A[j] > key) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;

    print_array(A);
  }
}

int main() {
  cin >> N;
  A = new int[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  solve();

  return 0;
}