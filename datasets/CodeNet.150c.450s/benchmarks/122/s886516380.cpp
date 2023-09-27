#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define NIL -2000000001
#define MAX 2000000

int A[MAX];
int n = 0;

void maxHeapify(int i) {
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
    maxHeapify(largest);
  }
}

void insert(int key) {
  n++;
  A[n-1] = key;
  int i = n-1;
  int parent = (i+1)/2-1;
  while (i > 0 && A[parent] < A[i]) {
    swap(A[i], A[parent]);
    i = (i+1)/2-1;
    parent = (i+1)/2-1;
  }
}

void heapExtractMax() {
  printf("%d\n", A[0]);
  A[0] = A[n-1];
  A[n-1] = NIL;
  n--;
  maxHeapify(0);
}

int main() {
  for ( int i = 0; i < MAX; i++ ) {
    A[i] = NIL;
  }

  char str[14];
  int key;
  for ( ;; ) {
    scanf("%s", str);
    if ( strcmp(str, "insert") == 0 ) {
      scanf("%d", &key);
      insert(key);
    } else if ( strcmp(str, "extract") == 0 ) {
      heapExtractMax();
    } else if ( strcmp(str, "end") == 0 ) {
      break;
    }
  }

  return 0;
}

