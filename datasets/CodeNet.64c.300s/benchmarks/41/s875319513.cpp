#include<stdio.h>
#include<algorithm>
using namespace std;
#define NIL -2000000001
#define MAX 500000

int A[MAX];

void maxHeapify(int i, int n) {
  int left = 2*(i+1)-1;
  int right = 2*(i+1)+1-1;
  int largest;
  if (left < n && A[left] > A[i]) {
    largest = left;
  } else {
    largest = i;
  }
  if (right < n && A[right] > A[largest]) {
    largest = right;
  }
  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest, n);
  }
}

void buildMaxHeap(int n) {
  for ( int i = n/2-1; i >= 0; i-- ) {
    maxHeapify(i, n);
  }
}

void printHeap(int n) {
  for ( int i = 0; i < n; i++ ) {
    printf(" %d", A[i]);
  }
  printf("\n");
}

int main() {
  for ( int i = 0; i < MAX; i++ ) {
    A[i] = NIL;
  }
	int n;
  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }
  buildMaxHeap(n);
  printHeap(n);

  return 0;
}

