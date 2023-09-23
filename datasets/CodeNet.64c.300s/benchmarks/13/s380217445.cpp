#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define NIL -2000000001
#define MAX 2000

int A[MAX];
int n = 0;

int fib(int num) {
  if (A[num] != NIL) {
    return A[num];
  } else {
    A[num-2] = fib(num-2);
    A[num-1] = fib(num-1);
    return A[num-2]+A[num-1];
  }
}

int main() {
  int num;
  for ( int i = 0; i < MAX; i++ ) {
    A[i] = NIL;
  }
  A[0] = 1;
  A[1] = 1;
  scanf("%d", &num);
  printf("%d\n", fib(num));
  return 0;
}

