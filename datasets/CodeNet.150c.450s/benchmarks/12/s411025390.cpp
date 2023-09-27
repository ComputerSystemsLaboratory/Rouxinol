#include<stdio.h>
#include<algorithm>
using namespace std;
#define NIL -2000000001
#define MAX 250

int A[MAX];

void printHeap(int n) {
  for ( int i = 0; i < n; i++ ) {
    printf("node %d: key = %d, ", i+1, A[i]);
    if (i+1 != 1) {
      printf("parent key = %d, ", A[(i+1)/2-1]);
    }
    if (A[2*(i+1)-1] != NIL && 2*(i+1)-1 < MAX) {
      printf("left key = %d, ", A[2*(i+1)-1]);
    }
    if (A[2*(i+1)+1-1] != NIL && 2*(i+1)+1-1 < MAX) {
      printf("right key = %d, ", A[2*(i+1)+1-1]);
    }
    printf("\n");
  }
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

  printHeap(n);

  return 0;
}

