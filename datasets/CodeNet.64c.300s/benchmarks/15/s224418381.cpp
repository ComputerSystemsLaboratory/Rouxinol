#include <stdio.h>

int main(void)
{

  int i, j, N, A[100], minj, c = 0, temp;

  scanf ("%d", &N);

  for (i = 0; i < N; i++) {
   scanf ("%d", &A[i]);
  }

for (i = 0; i < N; i++) {
   minj = i;
 
 for (j = i; j < N; j++) {
  if (A[j] < A[minj]) {
   minj = j;
}
}
 if(i != minj) {
 temp = A[minj];
 A[minj] = A[i];
 A[i] = temp;
 c++;
}
}
for (i = 0; i < N-1; i++){
 printf("%d ", A[i]);
}
 printf("%d\n%d\n",A[N-1],  c);

return 0;
}