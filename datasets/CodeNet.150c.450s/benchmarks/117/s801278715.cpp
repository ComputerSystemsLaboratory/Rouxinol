#include<bits/stdc++.h>
#define N 500000
#define INF (1e9)
using namespace std;
int n,s[N],ans;

void merge(int *A,int left,int mid,int right){
  int n1=mid-left,n2=right-mid;
  int L[N/2+1],R[N/2+1];
  for(int i=0;i<n1;i++)L[i]=A[left+i];
  for(int i=0;i<n2;i++)R[i]=A[mid+i];
  L[n1]=R[n2]=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    ans++;
    if(L[i]<=R[j])A[k]=L[i],i++;
    else A[k]=R[j],j++;
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

int main(){
  int A[N];
  cin>>n;
  for(int i=0;i<n;i++)cin>>A[i];
  mergeSort(A,0,n);
  for(int i=0;i<n;i++){
    if(i)cout<<' ';
    cout<<A[i];
  }
  cout<<endl;
  cout<<ans<<endl;
  return 0;
}