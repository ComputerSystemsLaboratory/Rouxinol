#include <iostream>
#include <climits>
using namespace std;

const int INFTY=INT_MAX;
const int maxn=500000;

int L[maxn/2+2],R[maxn/2+2];
int count;

void merge(int *Array,int left,int mid,int right) {
  int n1=mid-left;
  int n2=right-mid;
  for (int i=0; i<n1; i++) {
    L[i]=Array[left+i];
  }
  for (int i=0; i<n2; i++) {
    R[i]=Array[mid+i];
  }
  L[n1]=R[n2]=INFTY;
  int i=0,j=0;
  for (int k=left; k<right; k++) {
    count++;
    if (L[i]<=R[j]) {
      Array[k]=L[i++];
    }
    else {
      Array[k]=R[j++];
    }
  }
}
void mergeSort(int *Array,int left,int right) {
  if (left+1<right) {
    int mid=(left+right)/2;
    mergeSort(Array,left,mid);
    mergeSort(Array,mid,right);
    merge(Array,left,mid,right);
  }
}
int main() {
  std::ios::sync_with_stdio(false);
  cout.tie(0);
  cin.tie(0);
  int n;
  cin>>n;
  int S[n];
  for (int i=0; i<n; i++) {
    cin>>S[i];
  }
  count=0;
  mergeSort(S,0,n);
  for (int i=0; i<n; i++) {
    if (i) {
      cout<<" "<<flush;
    }
    cout<<S[i]<<flush;
  }
  cout<<endl;
  cout<<count<<endl;
  return 0;
}

