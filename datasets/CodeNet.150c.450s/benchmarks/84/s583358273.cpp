#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

const ll MAX=500000;
const ll INFTY=1000000010;

ll L[MAX/2+2],R[MAX/2+2];

ll merge(int A[], int left, int mid ,int right){
  int n1=mid-left;
  int n2=right-mid;
  ll cnt=0;
  rep(i,n1) L[i]=A[left+i];
  rep(i,n2) R[i]=A[mid+i];
  L[n1]=INFTY;
  R[n2]=INFTY;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]) A[k]=L[i++];
    else{
      A[k]=R[j++];
      cnt+=n1-i;
    }
  }
  return cnt;
}

ll mergeSort(int A[],int left,int right){
  int mid;
  ll v1,v2,v3;
  if(left+1<right){
    mid=(left + right)/2;
    v1=mergeSort(A,left,mid);
    v2=mergeSort(A,mid,right);
    v3=merge(A,left,mid,right);
    return v1+v2+v3;
  }else return 0;
}

int main() {
  int n;
  cin>>n;
  
  int A[MAX];
  rep(i,n) cin>>A[i];
  
  ll ans=mergeSort(A,0,n);
  cout<<ans<<endl;
 
  return 0;
}
