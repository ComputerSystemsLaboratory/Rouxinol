#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define MAX 2000000
#define INFTY (1 << 30)
  
int A[MAX + 1];
int H;
  
void maxHeapify(int i) {
  int left = 2 * i;
  int right = 2 * i + 1;
  int largest;
  
  if ( left <= H && A[left] > A[i] ) largest = left;
  else largest = i;
  
  if ( right <= H && A[right] > A[largest] ) largest = right;
  
  if ( largest != i ) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}
  
void heapIncreaseKey(int i, int key) {
  if ( key < A[i] ) return;
  A[i] = key;
  while ( i > 1 && A[i / 2] < A[i] ) {
    swap(A[i], A[i / 2]);
    i /= 2;
  }
}
  
void insert(int key) {
  A[++H] = -INFTY;
  heapIncreaseKey(H, key);
}
  
int heapExtractMax() {
  if ( H < 1 ) return -INFTY;
  int max = A[1];
  A[1] = A[H--];
  maxHeapify(1);
  
  return max;
}
  
int main() {
  int key;
  char com[10];
  
  while ( 1 ) {
    scanf("%s", com);
    if ( com[0] == 'e' && com[1] == 'n' ) break;
    if ( com[0] == 'i' ) {
      scanf("%d", &key);
      insert(key);
    } else {
      printf("%d\n", heapExtractMax());
    }
  }
  
  return 0;
}