#include <iostream>
#include <sstream>
int INF=1000000000;
int cnt=0;
void merge(int A[],int left,int mid,int right){
  int n1,n2;
  n1=mid-left;
  n2=right-mid;
  int L[n1+1];
  int R[n2+1];
  for(int i=0;i<n1;i++){
    L[i]=A[left+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=A[mid+i];
  }
  L[n1]=R[n2]=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
      cnt++;
    }else{
      A[k]=R[j];
      j++;
      cnt++;
    }
  }
}

void mergeSort(int A[],int left,int right){
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}

int main(){
  int n;
  std::cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    std::cin>>A[i];
  }
  int left=0;
  int right=n;
  mergeSort(A,left,right);
  for(int i=0;i<n-1;i++){
    std::cout<<A[i]<<" ";
  }
  std::cout<<A[n-1]<<"\n";
  std::cout<<cnt<<"\n";
}

