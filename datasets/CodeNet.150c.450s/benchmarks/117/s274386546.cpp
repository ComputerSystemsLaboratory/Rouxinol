#include<iostream>
#define N 500000
#define INF 2000000000
using namespace std;
int c;
void merge(int *A,int l,int m,int r){
  int n1=m-l,n2=r-m;
  int L[N],R[N];
  for(int i=0;i<n1;i++)L[i]=A[l+i];
  for(int i=0;i<n2;i++)R[i]=A[m+i];
  L[n1]=INF,R[n2]=INF;
  int i=0,j=0;
  for(int k=l;k<r;k++){
    if(L[i]<R[j])A[k]=L[i++];
    else A[k]=R[j++];
    c++;
  }
}
void mergesort(int *A,int l,int r){
  if(l+1<r){
    int m=(l+r)/2;
    mergesort(A,l,m);
    mergesort(A,m,r);
    merge(A,l,m,r);
  }
}


int main(){
  int n,S[N];
  cin>>n;
  for(int i=0;i<n;i++)cin>>S[i];
  mergesort(S,0,n);
  for(int i=0;i<n-1;i++)cout<<S[i]<<" ";
  cout<<S[n-1]<<endl<<c<<endl;
  return 0;
}