#include<iostream>
#include<limits.h>
using namespace std;

int cnt=0;

void merge(int A[], int l, int mid,int r){
  int n1 = mid-l;
  int n2 = r-mid;
  int L[n1+1], R[n2+1];
  for(int i=0;i<n1;i++){
    L[i] = A[l+i];
  }
  for(int i=0;i<n2;i++){
    R[i] = A[mid+i];
  }
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;
  int i=0, j=0;
  for(int k=l;k<r;k++){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
    cnt++;
  }
}

void mergesort(int A[], int l, int r){
  if(l+1<r){
    int mid = (l + r) / 2;
    mergesort(A, l, mid);
    mergesort(A, mid, r);
    merge(A, l, mid, r);
  }
}

int main(){
  int n, S[500000];
  cin>>n;
  for(int i=0;i<n;i++) cin>>S[i];
  mergesort(S, 0, n);
  for(int i=0;i<n;i++){
    if(i) cout<<" ";
    cout<<S[i];
  }
  cout<<endl<<cnt<<endl;
  return 0;
}

