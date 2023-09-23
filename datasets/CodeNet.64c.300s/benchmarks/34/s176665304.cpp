#include<iostream>
using namespace std;

#define MAX 1000

void printArray(int a[], int size);

int main(void) {
  int n;
  int input[MAX + 1];

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> input[i];
  }
  printArray(input, n);

  for(int i = 1; i < n; i++) {
    int v = input[i];
    int j = i - 1;
    while(j >= 0 && input[j] > v) {
      input[j + 1] = input[j];
      j--;
    }
    input[j + 1] = v;
    printArray(input, n);
  }
  return 0;
}

void printArray(int a[], int size) {
  for(int k  = 0; k < size; k++) {
    if(k == 0) {
      cout << a[k];
    }
    else {
      cout << " " << a[k];
    }
  }
  cout << endl;
}