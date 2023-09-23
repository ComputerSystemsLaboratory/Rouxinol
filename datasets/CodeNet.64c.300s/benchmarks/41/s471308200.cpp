#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...) do { \
    printf("D(L%d) %s: ", __LINE__, __func__); \
    printf(__VA_ARGS__); \
  } while (false)
#else
#define DPRINTF(...)
#endif // DEBUG


inline int getLeftChildIdx(int idx) {
  return (2 * idx + 1);
}


inline int getRightChildIdx(int idx) {
  return (2 * idx + 2);
}


void swap(int &a, int &b) {
  int c = b; b = a; a = c;
}


void maxHeapify(int array[], int maxOfIndex, int idx) {

  DPRINTF("idx %d\n", idx);

  if (idx >= maxOfIndex)
    return ;

  // check which is the most greatest number among the node, left and right childs
  const int leftChildIdx = getLeftChildIdx(idx);
  const int rightChildIdx = getRightChildIdx(idx);

  const int parent = array[idx];

  int largestIdx;
  if (leftChildIdx < maxOfIndex && array[leftChildIdx] > parent)
    largestIdx = leftChildIdx;
  else
    largestIdx = idx;

  if (rightChildIdx < maxOfIndex && array[rightChildIdx] > array[largestIdx])
    largestIdx = rightChildIdx;

  if (largestIdx != idx) {
    DPRINTF("swap array[%d] array[%d]\n", idx, largestIdx);
    swap(array[idx], array[largestIdx]);
    maxHeapify(array, maxOfIndex, largestIdx);
  }

#if DEBUG
  DPRINTF("");
  for (int i = 0; i < maxOfIndex; i++) {
    printf(" %d", array[i]);
  }
  cout << endl;
#endif

}


int main() {
  int numOfNode;
  cin >> numOfNode; cin.ignore();

  int array[numOfNode];
  for (int i = 0; i < numOfNode; i++) {
    cin >> array[i];
  }

#if DEBUG
  DPRINTF("");
  for (int i = 0; i < numOfNode; i++) {
    printf(" %d", array[i]);
  }
  cout << endl;
#endif

  for (int i = numOfNode/2; i >= 0; i--) {
    maxHeapify(array, numOfNode, i);
  }

  for (int i = 0; i < numOfNode; i++) {
    printf(" %d", array[i]);
  }
  cout << endl;

  return 0;
}
