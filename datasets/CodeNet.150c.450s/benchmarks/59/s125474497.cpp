#include <iostream>
using namespace std;

void display(int* A, int size);

int main() {
  int size;
  int A[100];
  cin >> size;
  for(int i=0; i<size; i++) {
    cin >> A[i];
  }

  // Insertion sort
  for(int i=0; i<size; i++) {
    int key = A[i];
    int j=i-1;
    while(j>=0 && A[j] > key) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;

    display(A,size);
  }

  return 0;
}

void display(int* A, int size) {
  cout << A[0];
  for(int i=1; i<size; i++) {
    cout << " " << A[i];
  }
  cout << endl;
}