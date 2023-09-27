#include "bits/stdc++.h"
using namespace std;

unsigned long long c=0;
int A[100000000];

void marge(int A[], int left, int mid, int right){
  int n1=0,n2=0;
  int L[500100];
  int R[500100];
  n1=mid-left;
  n2=right-mid;
  for(int i=0;i<n1;i++){
    L[i]=A[left+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=A[mid+i];
  }
  L[n1]=INT_MAX;
  R[n2]=INT_MAX;
  int j=0;
  int i=0;
  for(int k=left;k<right;k++){
    
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
      
    }
    else {
      A[k]=R[j];
      j++;
      c=c+n1-i;
    }
  }
}

void margesort(int A[], int left, int right){
  int mid=0;
  if(left+1<right){
    mid=(left+right)/2;
    margesort(A,left,mid);
    margesort(A,mid,right);
    marge(A,left,mid,right);
  }
}

int main(){
  int n=0;
  int left=0,right=0;
  //int S[100000000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  left=0;
  right=n;
  margesort(A,left,right);
  /*for(int i=0;i<n;i++){
    if(i!=0)cout<<" ";
    cout<<A[i];
    }*/
  printf("%llu\n",c);
  
  return 0;
}
