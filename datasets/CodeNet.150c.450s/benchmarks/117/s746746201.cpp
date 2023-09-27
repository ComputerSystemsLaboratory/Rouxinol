#include <iostream>
using namespace std;
#define MAX 500000
#define INF 2000000000

int L[MAX/2+2],R[MAX/2+2];
int t=0;

void merge(int A[],int n,int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  int i,j;
  
  for(i=0;i<n1;i++){
    L[i]=A[left+i];
  }
  for(i=0;i<n2;i++){
    R[i]=A[mid+i];
  }
  L[n1]=INF;
  R[n2]=INF;
  i=0;
  j=0;
  for(int k=left;k<right;k++){
    t++;
    if(L[i]<=R[j]){
      A[k]=L[i];
      i+=1;
    }
    else{
      A[k]=R[j];
      j+=1;
    }
  }
}

void mergeSort(int A[],int n,int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergeSort(A,n,left,mid);
    mergeSort(A,n,mid,right);
    merge(A,n,left,mid,right);
  }
}

int main(){
  int n,A[MAX];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }

  mergeSort(A,n,0,n);

  for(int i=0;i<n;i++){
    if(i!=0) cout<<" ";
    cout<<A[i];
  }
  cout<<endl;

  cout<<t<<endl;

  return 0;
}