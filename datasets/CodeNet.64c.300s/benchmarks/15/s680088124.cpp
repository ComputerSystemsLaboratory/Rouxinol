/* Selection Sort */
#include <stdio.h>

int selectionSort(int* A, int N) { 
  int flag = 1; // 逆の隣接要素が存在する
  int counter = 0;
  int i;

  for (i=0; i<N; i++) {
    int j, minj = i;
    
    for(j=i; j<N; j++) {
      if (A[j] < A[minj])
	minj = j;
    }
    if (i != minj) {
      int tmp;
      tmp = A[i];
      A[i] = A[minj];
      A[minj] = tmp;
      counter++;
    }
  }
  
  return counter;
}

int main(void) {
  int A[100]; // 数列
  int N; // 数列の長さ
  int i;
  int count; // 交換回数
  
  scanf("%d", &N);

  // 数列読み込み
  for (i=0; i<N; i++)
    scanf("%d", &A[i]);

  count = selectionSort(A, N);

  for (i=0; i<N; i++) {
    printf("%d", A[i]);
    if (i != N-1)
      putchar(' ');
  }
  putchar('\n');

  printf("%d\n", count);

  return 0;
}