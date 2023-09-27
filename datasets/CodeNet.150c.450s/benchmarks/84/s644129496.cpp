#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

long long mg(int A[],int l,int m,int r){
  long long cnt=0;
  int n1=m-l,n2=r-m;
  int L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++)L[i]=A[l+i];
  for(int i=0;i<n2;i++)R[i]=A[m+i];
  L[n1]=1000000001,R[n2]=1000000001;
  int i=0,j=0;
  for(int k=l;k<r;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      j++;
      cnt+= (long long)n1- (long long)i;
    }
  }
  return cnt;
}

long long mgs(int A[],int l,int r){
  long long cnt=0;
  if(l+1<r){
    int m=(l+r)/2;
    cnt+=mgs(A,l,m);
    cnt+=mgs(A,m,r);
    cnt+=mg(A,l,m,r);
  }
  return cnt;
}

int main(){
  int n,A[200000];
  long long cnt;
  cin>>n;
  for(int i=0;i<n;i++)scanf("%d",&A[i]);
  cnt=mgs(A,0,n);
  cout<<cnt<<endl;
  return 0;
}