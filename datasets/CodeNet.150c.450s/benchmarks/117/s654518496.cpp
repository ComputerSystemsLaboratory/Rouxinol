#include <stdio.h>
#define N 500000
#define S 1000000001

void merge(int *, int, int ,int);
void mergeSort(int *, int, int);

int out;

int main(){
  
  int i;
  int n;
  int s[N];
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &s[i]);
  }
  
  mergeSort(s, 0, n);
  
  for(i = 0; i < n; i++){
    printf("%d", s[i]);
    if(i < n - 1) printf(" ");
  }
  printf("\n%d\n", out);
  
  return 0;
}

void merge(int *a, int left, int mid, int right){
  
  int i, j, k;
  int n1 = mid - left;
  int n2 = right - mid;
  int l[N], r[N];
  
  for(i = 0; i < n1; i++){
    l[i] = a[left + i];
  }

  for(i = 0; i < n2; i++){
    r[i] = a[mid + i];
  }

  l[n1] = S;
  r[n2] = S;

  i = 0;
  j = 0;

  for(k = left; k < right; k++){
    if(l[i] <= r[j]){
      a[k] = l[i];
      i++;

      out ++;
    }
    else {
      a[k] = r[j];
      j++;

      out ++;
    }

  }

}

void mergeSort(int *a, int left, int right){

  int mid;

  if(left + 1 < right){
    mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
  
}