#include<stdio.h>

#define INF 1000000001
int c = 0;

int L[250001];
int R[250001];

void merge(int array[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  for(int i = 0; i < n1; i++) {
    L[i] = array[left + i];
  }
  for(int i = 0; i < n2; i++) {
    R[i] = array[mid + i];
  }
  L[n1] = INF;
  R[n2] = INF;

  int i = 0;
  int j = 0;

  for(int k = left; k < right; k++) {
    c++;
    if(L[i] <= R[j]) {
      array[k] = L[i];
      i++;
    }
    else {
      array[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int array[], int left, int right) {
  if(left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid, right);
    merge(array, left, mid, right);
  }
}

int main(void) {
  int n;
  int array[500000];

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  mergeSort(array, 0, n);
  for(int i = 0; i < n; i++) {
    if(i > 0) {
      printf(" ");
    }
    printf("%d", array[i]);
  }
  printf("\n");
  printf("%d\n", c);
  return 0;
}