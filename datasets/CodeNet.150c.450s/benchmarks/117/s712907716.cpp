#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1LL<<55LL; 
int cnt;
void merge(int *A,int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  int L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++) L[i]=A[left+i];
  for(int i=0;i<n2;i++) R[i]=A[mid +i];
  L[n1]=INF;
  R[n2]=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    cnt++;
    if(L[i]<=R[j]) A[k]=L[i++];
    else A[k]=R[j++];
  }
}
void mergeSort(int *A,int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin>>n;
  int S[n];
  for(int i=0;i<n;i++) cin>>S[i];
  cnt=0;
  mergeSort(S,0,n);
  for(int i=0;i<n;i++) cout<<S[i]<<" \n"[i==n-1];
  cout<<cnt<<endl;
  return 0;
}