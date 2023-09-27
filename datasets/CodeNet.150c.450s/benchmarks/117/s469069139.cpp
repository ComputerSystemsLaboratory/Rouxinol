#include <iostream>
using namespace std;
const int MAX=500000;
const int SENTINEL=2000000000;

int L[MAX/2+2];
int R[MAX/2+2];
int cnt;

void merge(int A[],int n,int left,int mid,int right) {
  int n1=mid-left;
  int n2=right-mid;
  for (int i=0; i<n1; i++) {
    L[i]=A[left+i];
  }
  for (int i=0; i<n2; i++) {
    R[i]=A[mid+i];
  }
  L[n1]=R[n2]=SENTINEL;
  int i=0, j=0;
  for (int k=left; k<right; k++) {
    cnt++;
    if (L[i]<=R[j]) {
      A[k]=L[i++];
    } else {
      A[k]=R[j++];
    }
  }
}
void mergeSort(int A[],int n,int left,int right) {
  int mid;
  if (left+1<right) {
    mid=(left+right)/2;
    mergeSort(A,n,left,mid);
    mergeSort(A,n,mid,right);
    merge(A,n,left,mid,right);
  }
}
int main() {
  int A[MAX];
  cnt=0;
  int n;
  cin>>n;
  for (int i=0; i<n; i++) {
    cin>>A[i];
  }
  mergeSort(A,n,0,n);
  for (int i=0; i<n; i++) {
    cout<<(i==0?"":" ")<<A[i]<<flush;
  }
  cout<<endl;
  cout<<cnt<<endl;
  return 0;
}

