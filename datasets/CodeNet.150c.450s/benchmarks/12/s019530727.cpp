#include <iostream>
#include <stdio.h>
using namespace std;

#define HEAP_SIZE 250

int min(int x, int y) {
  if(x < y) return x;
  return y;
}

int max(int x, int y) {
  if(x < y) return y;
  return x;
}

int rightChild(int key) {
  return 2*key + 1;
}

int leftChild(int key) {
  return 2*key;
}

int parent(int key) {
  return key/2;
}

int main() {
  int h[HEAP_SIZE];
  int n;
  cin >> n;
  for(int i=1; i<n+1; i++) {
    cin >> h[i];
  }

  for(int i=1; i<n+1; i++) {
    int parentIndex = parent(i);
    if(parentIndex > n || parentIndex < 1) {
      parentIndex = 0;
    }
    int leftIndex = leftChild(i);
    if(leftIndex > n || leftIndex < 1) {
      leftIndex = 0;
    }
    int rightIndex = rightChild(i);
    if(rightIndex > n || rightIndex < 1) {
      rightIndex = 0;
    }

    printf("node %d: key = %d, ", i, h[i]);
    if(parentIndex > 0) {
      printf("parent key = %d, ", h[parentIndex]);
    }
    if(leftIndex > 0) {
      printf("left key = %d, ", h[leftIndex]);
    }
    if(rightIndex > 0) {
      printf("right key = %d, ", h[rightIndex]);
    }
    printf("\n");
  }

  return 0;
}