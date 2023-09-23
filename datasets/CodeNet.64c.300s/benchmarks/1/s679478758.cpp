#include<iostream>
using namespace std;

int partition(int A[],int p,int r){
  int x,i,tmp;
  x=A[r-1];
  i=p-1;
  for(int j=p;j<=r-2;j++){
    if(A[j]<=x){
      i=i+1;
      tmp=A[i];
      A[i]=A[j];
      A[j]=tmp;
     }
    }
  tmp=A[i+1];
  A[i+1]=A[r-1];
  A[r-1]=tmp;
  return i+1;
}

int main(){
  int n,m;
  cin>>n;
  int S[n];
  for(int i=0;i<n;i++){
    cin>>S[i];
  }
  m=partition(S,0,n);
  for(int i=0;i<m;i++){
    cout<<S[i]<<' ';
  }
  cout<<'['<<S[m]<<']';
  for(int i=m+1;i<n;i++){
    cout<<' '<<S[i];
  }
  cout<<endl;
}

