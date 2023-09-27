#include<stdio.h>
#include<string.h>
#define max 1000000
#define INF 1000000000

void merge(int [],int ,int ,int );
void mergeSort(int [],int ,int );


int count = 0;
int main(){
  int i,j,A[max],left,right,n;
 
  scanf("%d",&n);
   
  for(i = 0;i < n;i++){
    scanf("%d",&A[i]);
  }
  left = 0;
  right = n;
  mergeSort(A,left,right);
   
   for(i = 0;i < n-1;i++){
    printf("%d ",A[i]);
  }
   printf("%d\n",A[n-1]);
   printf("%d\n",count);
  return 0;
}
 
void mergeSort(int A[],int left, int right){
  int mid = 0;
 
  if((left + 1) < right){
    mid = (left + right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}
 
void merge(int A[],int left,int mid,int right){
  int n1,n2,i,j,k;
   
  n1 = mid - left;
  n2 = right - mid;
 
  int L[n1+1],R[n2+1];
 
  for(i = 0;i < n1;i++){
    L[i] = A[left+i];
  }
 
  for(i = 0;i < n2;i++){
    R[i] = A[mid+i];
  }
  L[n1] = INF;
  R[n2] = INF;
  i = 0;
  j = 0;
   
  for(k = left;k < right;k++){
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
 
 