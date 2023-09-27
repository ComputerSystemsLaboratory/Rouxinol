#include <iostream>
#include <vector>

using namespace std;

static void inputArray(int A[], int num) {
  for (int i = 0; i < num; i++) {
    cin >> A[i];
   }
}

static void printArray(int A[], int num) {
  for (int i = 0; i < num; i++) {
    cout << ((i != 0) ? " " : "") << A[i];
  }
  cout << endl;
}

static vector<int> C(10000 + 1, 0);
static inline void countingSort(int A[], int B[], int num) {
  for (int i = 0; i < num; i++) {
    C[A[i + 1]]++;
  }
  for (int i = 1; i <= 10000; i++) {
    C[i] = C[i] + C[i - 1];
  }
  for (int i = num; i > 0; i--) {
//  for (int i = 1; i <= num; i++) {
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }
}  

static vector<int> A(2000000 + 1), B(2000000 + 1);

int main() {
  int n;
  cin >> n;

  inputArray(&A[1], n);

  countingSort(&A[0], &B[0], n);

  printArray(&B[1], n);
    
  return 0;
}

