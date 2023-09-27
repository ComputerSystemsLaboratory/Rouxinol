#include <stdio.h>
#include <math.h>

void merge(int [],int,int,int); //??¨??????????????±???
void mergeSort(int [],int,int); //2????????¨?????????????????????????????????

int cnt=0;
int L[250000+2],R[250000+2];

int main()
{
  int i,n,left,right;
  int A[500000];
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }

  left=0;
  right=n;

  mergeSort(A,left,right);

  for(i=0;i<n;i++){
    if(i==n-1) printf("%d\n",A[i]);
    else printf("%d ",A[i]);
  }
  
  printf("%d\n",cnt);

  return 0;
}

void mergeSort(int A[],int left,int right)
{
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}

void merge(int A[],int left,int mid,int right)
{
  int n1,n2,i,j,k;
  
  n1=mid-left;
  n2=right-mid;
  
  for(i=0;i<=n1-1;i++){
    L[i]=A[left+i];
  }

  for(i=0;i<=n2-1;i++){
    R[i]=A[mid+i];
  }

  L[n1]=2000000000;
  R[n2]=2000000000;
  i=0;
  j=0;

  for(k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i=i+1;
    }else{
      A[k]=R[j];
      j=j+1;
    }
    cnt++;
  }
}