#include <iostream>
#include <climits>
using namespace std;
typedef long long ll;

const int INFTY=INT_MAX;
const int maxn=500000;

int L[maxn/2+2],R[maxn/2+2];

ll merge(int *Array,int left,int mid,int right) {
  int n1=mid-left;
  int n2=right-mid;
  ll count=0;
  for (int i=0; i<n1; i++) {
    L[i]=Array[left+i];
  }
  for (int i=0; i<n2; i++) {
    R[i]=Array[mid+i];
  }
  L[n1]=R[n2]=INFTY;
  int i=0,j=0;
  for (int k=left; k<right; k++) {
    if (L[i]<=R[j]) {
      Array[k]=L[i++];
    }
    else {
      Array[k]=R[j++];
      count+=n1-i;
    }
  }
  return count;
}
ll mergeSort(int *Array,int left,int right) {
  ll v1,v2,v3;
  if (left+1<right) {
    int mid=(left+right)/2;
    v1=mergeSort(Array,left,mid);
    v2=mergeSort(Array,mid,right);
    v3=merge(Array,left,mid,right);
    return v1+v2+v3;
  }
  else {
    return 0;
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
  ll ans=mergeSort(S,0,n);
  cout<<ans<<endl;
  return 0;
}

