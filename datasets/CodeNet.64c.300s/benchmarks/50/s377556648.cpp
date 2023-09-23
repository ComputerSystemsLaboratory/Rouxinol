#include <cstdio>

int A[100 + 10], N;
int count;
bool flag;

void bubbleSort(int A[], int N);
void swap(int& a, int& b);
void trace(int A[], int N);

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) { scanf("%d", &A[i]); }

  bubbleSort(A, N);

  trace(A, N);
  printf("%d\n", count);

  return 0;
}

void bubbleSort(int A[], int N) {
  flag = true;

  while (flag) {
    flag = false;
    for (int j = 0; j < N; ++j) {
      if (A[j] < A[j - 1]) { swap(A[j], A[j - 1]); flag = true; }
    }
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