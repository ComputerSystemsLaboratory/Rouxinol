#include <iostream>

static int n, q, value;

void exhaustiveSearch (int i, int sum, int *A, bool *flag) {

  if (*flag) {
    return;
  }

  if (sum == value) {
    *flag = true;
  }

  if (i == n) {
    return;
  }

  exhaustiveSearch (i+1, sum, A, flag);
  exhaustiveSearch (i+1, sum+A[i], A, flag);

}

int main () {

  scanf("%d", &n);

  int A[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  scanf("%d", &q);

  int Q[q];

  for (int i = 0; i < q; i++) {
    scanf("%d", &Q[i]);
  }


  for (int i = 0; i < q; i++) {
    value = Q[i];
    bool flag = false;
    exhaustiveSearch(0, 0, A, &flag);

    if (flag) {
      printf("yes\n");
    } else {
      printf("no\n");
    }

  }

}