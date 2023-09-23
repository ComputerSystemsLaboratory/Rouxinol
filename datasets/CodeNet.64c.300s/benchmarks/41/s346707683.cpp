#include <iostream>
#include <climits>
const long MAX_H = 500000;

void swap(long A[], long i, long j) {
  long tmp = A[i];
  A[i] = A[j];
  A[j] = tmp;
}

void maxHeapify(long A[], long i, long H) {
  long leftIndex = 2 * i;
  long rightIndex = 2 * i + 1;

  long largest = i;
    
  if ((leftIndex <= H) && (A[leftIndex] > A[i])) {
    largest = leftIndex;
  }

  if ((rightIndex <= H) && (A[rightIndex] > A[largest])) {
    largest = rightIndex;
  }

  if (largest != i) {
    swap(A, i, largest);
    maxHeapify(A, largest, H);
  }
}

void buildMaxHeap(long A[], long H) {
  for (long i = H / 2; i >= 1; i--) {
    maxHeapify(A, i, H);
  }
}

int main(void) {
  long H = 0;
  long A[MAX_H + 1];

  std::cin >> H;

  for (long i = 1; i <= MAX_H; i++) {
    std::cin >> A[i];
  }

  buildMaxHeap(A, H);

  for (long i = 1; i <= H; i++) {
    std::cout << " " << A[i];
  }

  std::cout << std::endl;
  
  return 0;
}