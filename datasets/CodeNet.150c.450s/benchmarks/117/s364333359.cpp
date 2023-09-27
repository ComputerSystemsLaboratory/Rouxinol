#include<iostream>
#include<vector>
#define N 500000
#define INF 2000000000
using namespace std;
int c;

void merge(int *A,int l,int m,int r){
  vector<int> L,R;
  for(int i=l;i<m;i++)L.push_back(A[i]);
  for(int i=m;i<r;i++)R.push_back(A[i]);  
  int i=0,j=0;
  L.push_back(INF);
  R.push_back(INF);
   for(int k=l;k<r;k++){
     if(R[j]>L[i])A[k]=L[i++];
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
