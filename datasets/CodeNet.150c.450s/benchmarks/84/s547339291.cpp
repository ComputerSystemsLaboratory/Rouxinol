#include <stdio.h>

void RSort(int *, int, int);
void Reverse(int *, int, int, int);
double sum=0;

int main(){

  int i, n;
  int N[200000];

  scanf("%d", &n);

  for(i=0; i<n; i++)
    scanf("%d", &N[i]);

  RSort(N,0,n);

  printf("%.0f\n", sum);

  return 0;
}

void RSort(int *A, int left, int right){

  int mid,temp;

  if(left+1<right){
    mid=(left+right)/2;
    RSort(A, left, mid);
    RSort(A, mid, right);
    Reverse(A, left, mid, right);
  }
}

void Reverse(int *A, int left, int mid, int right){

  int k, n1, n2, L[200000], R[200000], i, j;

  n1=mid-left;
  n2=right-mid;

  for(i=0;i<n1;i++)
    L[i]=A[left+i];

  for(i=0;i<n2;i++)
    R[i]=A[mid+i];

  L[n1]=1000000000;
  R[n2]=1000000000;
  i=0;
  j=0;

  for(k=left; k<right; k++){
    if(L[i]<R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      sum+=n1-i;
      j++;
    }
  }
}