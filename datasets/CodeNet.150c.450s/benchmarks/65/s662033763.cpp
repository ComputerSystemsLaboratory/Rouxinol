#include<stdio.h>

struct Card {
  char suit;
  int value;
};

void bubbleSort(Card A[], int n) {
  for ( int i = 0; i < n; i++ ) {
    for ( int j = n - 1; j > i; j-- ) {
      int v = j - 1;
      if (A[j].value < A[v].value) {
        Card t = A[j];
        A[j] = A[v];
        A[v] = t;
      }
    }
  }

  for ( int i = 0; i < n; i++ ) {
    if(i) printf(" ");
    printf("%c%d", A[i].suit, A[i].value);
  }
  printf("\n");
  printf("Stable\n");
}

void selectionSort(Card A[], int n) {
  for ( int i = 0; i < n; i++ ) {
    int min = i;
    int v = i + 1;
    while(v < n) {
      if ( A[min].value > A[v].value ) min = v;
      v++;
    }
    Card t = A[i];
    A[i] = A[min];
    A[min] = t;
  }
  for ( int i = 0; i < n; i++ ) {
    if(i) printf(" ");
    printf("%c%d", A[i].suit, A[i].value);
  }
  printf("\n");
}

int main() {
  int n, i;
  char t[3];
  Card A[36], B[36];

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) {
    scanf("%s", t);
    B[i].suit = A[i].suit = t[0];
    B[i].value = A[i].value = t[1] - '0';
  }

  bubbleSort(A, n);
  selectionSort(B, n);

  for ( i = 0; i < n; i++ ) {
    if (A[i].suit != B[i].suit) break;
  }
  if (i == n) printf("Stable\n");
  else printf("Not stable\n");

  return 0;
}

