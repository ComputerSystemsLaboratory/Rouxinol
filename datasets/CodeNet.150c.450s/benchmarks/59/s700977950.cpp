#include <cstdio>
using namespace std;

//N is array size
int A[1000 + 10], N;

void trace(int A[], int N);
void insertionSort(int A[], int N);

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) { scanf("%d", &A[i]); }

  insertionSort(A, N);

  return 0;
}

//display Array
void trace(int A[], int N) {
  for (int i = 0; i < N; ++i) {
    if (i) { printf(" "); }
    printf("%d", A[i]);
  }
  printf("\n");
}

void insertionSort(int A[], int N) {
  for (int i = 0; i < N; ++i) {
    int j = i - 1;
    int v = A[i];

    while (j >= 0 && v < A[j]) {
      A[j + 1] = A[j];
      j--;
    }

    A[j + 1] = v;
    trace(A, N);
  }
}