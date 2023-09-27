#include <stdio.h>
 
#define MAX 500000
#define INFTY 2000000000
 
void Merge(int[MAX], int, int, int);
void MergeSort(int[MAX], int, int);
 
int count = 0;
 
int main(){
 
  int i, n;
  int A[MAX];
 
  scanf("%d", &n);
 
  for(i =0; i < n; i++){
 
    scanf("%d", &A[i]);
 
  }
 
  MergeSort(A, 0, n);
   
  for(i = 0; i < (n - 1); i++){
       
    printf("%d ", A[i]);
 
  }
 
  printf("%d\n", A[i]);
 
  printf("%d\n", count);
  
  return 0;
 
}
 
void Merge(int A[MAX], int left, int mid, int right){
 
  int i, j, k;
 
  int n1, n2;
 
  n1 = mid - left;
  n2 = right - mid;
 
  int L[MAX], R[MAX];
 
  for(i = 0; i < n1; i++){
 
    L[i] = A[left + i];
 
  }
 
  for(i = 0; i < n2; i++){
 
    R[i] = A[mid + i];
 
  }
 
  L[n1] = INFTY;
  R[n2] = INFTY;
 
  i = 0;
  j = 0;
 
  for(k = left; k < right; k++){
 
    if(L[i] <= R[j]){
 
      A[k] = L[i];
 
      i++;
 
    }
    else{
 
      A[k] = R[j];
       
      j++;
 
    }
 
    count++;
 
  }
 
}
 
void MergeSort(int A[MAX], int left, int right){
 
  int mid;
 
  if((left + 1) < right){
 
    mid = (left + right) / 2;
 
    MergeSort(A, left, mid);
 
    MergeSort(A, mid, right);
 
    Merge(A, left, mid, right);
 
  }
 
}