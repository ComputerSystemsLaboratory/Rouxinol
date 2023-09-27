#include <stdio.h>
#define INFTY 1000000000
#define N 500000

void merge(int *,int,int,int);
void mergesort(int *,int,int);
int count=0;
int main(){
  int S[N];
  int n,i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }

  mergesort(S,0,n);
  for(i=0;i<n-1;i++){
    printf("%d ",S[i]);
  }
  printf("%d\n",S[n-1]);
  printf("%d\n",count);
  return 0;

}

void mergesort(int *A,int left,int right){

  int mid;

  if(left+1<right){
    mid=(left+right)/2;
    mergesort(A,left,mid);
    mergesort(A,mid,right);
    merge(A,left,mid,right);
  }

}

void merge(int *A,int left,int mid,int right){

  int n1,n2,i,k,j;
  n1 = mid - left;
  n2 = right - mid;

  int L[n1+1],R[n2+1];
  //L[0...n1], R[0...n2] ?????????
  for(i = 0;i<n1;i++){
    L[i] = A[left + i];
  }
  for (i = 0;i<n2;i++){
    R[i] = A[mid + i];
  }
  L[n1] = INFTY;
  R[n2] = INFTY;
  i = 0;
  j = 0;
  for (k = left;k<right;k++){
    if (L[i] <= R[j]){
      A[k] = L[i];
      i = i + 1;
      count++;
    }
    else {
      A[k] = R[j];
      j = j + 1;
      count++;
    }
}
}