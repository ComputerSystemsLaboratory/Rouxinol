#include <stdio.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define INF 3333333333
#define uint unsigned int

int merge(uint S[], int left, int mid, int right) {
  int numComp = 0;
  int n1 = mid - left;
  int n2 = right - mid;
  uint L[n1 + 1], R[n2 + 1];
  REP(i, n1) {
    L[i] = S[left + i];
  }
  REP(i, n2) {
    R[i] = S[mid + i];
  }
  L[n1] = INF;
  R[n2] = INF;

  int i = 0, j = 0;
  FOR(k, left, right) {
    if(L[i] <= R[j]) {
      S[k] = L[i];
      i += 1;
    } else {
      S[k] = R[j];
      j += 1;
    }
    numComp += 1;
  }
  return numComp;
}

int mergeSort(uint S[], int left, int right) {
  int numComp = 0, mid;
  if((left + 1) < right) {
    mid = (left + right) / 2;
    numComp += mergeSort(S, left, mid);
    numComp += mergeSort(S, mid, right);
    numComp += merge(S, left, mid, right);
  }
  return numComp;
}

int main(void) {
  int n;
  scanf("%d", &n);
  uint S[n];
  REP(i, n) {
    scanf("%d", &S[i]);
  }

  int numComp = mergeSort(S, 0, n);

  REP(i, n) {
    if(i != 0) {
      printf(" ");
    }
    printf("%d", S[i]);
  }
  printf("\n%d\n", numComp);

  return 0;
}