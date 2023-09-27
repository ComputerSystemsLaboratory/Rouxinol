#include <cstdio>
#include <iostream>
using namespace std;
#define MAX 500000
#define CENTINEL 2000000000
int L[MAX/2+2],R[MAX/2+2];
int sum=0;
int n,A[MAX];
void merge(int A[],int left,int mid,int right){
  int na=mid-left;
  int nb=right-mid;
  for(int i=0;i<na;i++)L[i]=A[left+i];
  for(int i=0;i<nb;i++)R[i]=A[mid+i];
  L[na]=CENTINEL;R[nb]=CENTINEL;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    sum++;
    if(L[i]<=R[j]) A[k]=L[i++];
    else A[k]=R[j++];
  }
}
void mergesort(int A[],int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergesort(A,left,mid);
    mergesort(A,mid,right);
    merge(A,left,mid,right);
  }
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++)scanf("%d",&A[i]);
  mergesort(A,0,n);
  for(int i=0;i<n-1;i++)printf("%d ",A[i]);
  printf("%d\n",A[n-1]);
  printf("%d\n",sum);
  return 0;
}