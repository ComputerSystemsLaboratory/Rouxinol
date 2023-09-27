#include <stdio.h>
void merge(int *,int,int,int);
void mergesort(int*,int,int);
long long cnt=0;
int L[100002],R[100002];
int main(){
  int A[200000],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&A[i]);
  mergesort(A,0,n);
  printf("%ld\n",cnt);
  return 0;
}
void merge(int *a,int left,int mid,int right){
  int i,k,j,n1=mid-left,n2=right-mid;
  for(i=0;i<n1;i++){
    L[i]=a[left+i];
  }
  for(i=0;i<n2;i++){
    R[i]=a[mid+i];
  }
  L[n1]=2147483647;
  R[n2]=2147483647;
  i=0;
  j=0;
  for(k=left;k<right;k++){
    if(L[i]<=R[j])a[k]=L[i++];
    else{
      a[k]=R[j++];
      cnt+=n1-i;
    }
  }
  return;
}
void mergesort(int *a,int left,int right){
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid,right);
    merge(a,left,mid,right);
  }
  else return;
}

