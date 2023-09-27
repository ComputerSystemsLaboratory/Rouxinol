
//p175

#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX 500000 //5*1e5
#define INF 2000000000 //2*1e9 //sentinel
typedef long long ll;


ll merge(int A[],int n,int left,int mid,int right){

  int n1=mid-left;
  int n2=right-mid;
  ll cnt=0; //number of inversions

  int L[MAX],R[MAX];

  rep(i,n1) L[i]=A[left+i];
  rep(i,n2) R[i]=A[mid+i];
  L[n1]=R[n2]=INF;

  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      j++;
      cnt+=n1-i;// mid+j-k-1;
    }  
  }
  return cnt;
}

//[left,right)
ll mergesort(int A[],int n,int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    ll v1=mergesort(A,n,left,mid);
    ll v2=mergesort(A,n,mid,right);
    ll v3=merge(A,n,left,mid,right);
    return v1+v2+v3;
  }else{
    return 0;
  }
}

int main(){
  int A[MAX],n;
  cin>>n;
  rep(i,n)cin>>A[i];

  ll ans=mergesort(A,n,0,n);

  cout<<ans<<endl;
}