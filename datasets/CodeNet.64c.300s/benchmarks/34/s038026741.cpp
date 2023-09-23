#include <iostream>
using namespace std;

int N, A[1000];

void print() {
  for (int i = 0; i < N; i++) {
    if (i != 0) cout << " ";
    cout << A[i];
  }
  cout << endl;
}

void isort() {
  for (int i = 1; i < N; i++) {
    int v = A[i];
    int j;
    print();
    for (j = i - 1; j >= 0 && A[j] > v; j--) {
      A[j+1] = A[j];
    }
    A[j+1] = v;
  }
  print();
}

int main(void) {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];
  
  isort();
  
  return 0;
}