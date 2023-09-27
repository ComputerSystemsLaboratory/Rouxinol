#include <cstdio>

int A[100 + 10], N;
int count;

void selectionSort(int A[], int N);
void swap(int& a, int& b);
void trace(int A[], int N);

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) { scanf("%d", &A[i]); }

  selectionSort(A, N);

  trace(A, N);
  printf("%d\n", count);

  return 0;
}

void selectionSort(int A[], int N) {
  for (int i = 0; i < N; ++i) {
    int minj = i;
    bool flag = false;
    for (int j = i; j < N; ++j) {
      if (A[j] < A[minj]) { minj = j; flag = true; }
    }

    if (flag) { swap(A[i], A[minj]); }
  }
}

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;

  count++;
}

void trace(int A[], int N) {
  for (int i = 0; i < N; ++i) {
    if (i) { printf(" "); }
    printf("%d", A[i]);
  }
  printf("\n");
}