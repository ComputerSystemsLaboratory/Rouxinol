#include<stdio.h>
#include<iostream>

using namespace std;

int partition(int A[],int p,int r){
  int x=0,i=0,j=0,tmp=0;
  x=A[r];
  i=p-1;
  for(j=p;j<r;j++){
    if(A[j]<=x){
      i=i+1;
      tmp=A[j];
      A[j]=A[i];
      A[i]=tmp;
    }
  }
  tmp=A[r];
  A[r]=A[i+1];
  A[i+1]=tmp;
  return i+1;
}

int main(){
  int n=0;
  int A[1001000]={};
  int Par=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  Par=partition(A,0,n-1);
  //cout<<Par<<endl;
  for(int i=0;i<n;i++){
    if(i!=0)cout<<" ";
    if(i==Par)cout<<"[";
    cout<<A[i];
    if(i==Par)cout<<"]";
    
  }
  printf("\n");
  return 0;
}

