#include <cstdio>
#include <iostream>
using namespace std;
#define CENTINEL 2000000000
#define MAX 200000
typedef long long int llong;
int n,A[200000];
int L[MAX/2+2],R[MAX/2+2];
llong merge(int A[],int left,int mid,int right){
  int na=mid-left;
  int nb=right-mid;
  llong sum=0;
  for(int i=0;i<na;i++)L[i]=A[left+i];
  for(int i=0;i<nb;i++)R[i]=A[mid+i];
  L[na]=R[nb]=CENTINEL;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j])A[k]=L[i++];
    else {A[k]=R[j++];sum+=na-i;}
  }
  return sum;
}
llong mergesort(int A[],int left,int right){
  llong v1,v2,v3;
  if(left+1<right){
    int mid=(left+right)/2;
    v1=mergesort(A,left,mid);
    v2=mergesort(A,mid,right);
    v3=merge(A,left,mid,right);
    return v1+v2+v3;
  } else return 0;
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++)scanf("%d",&A[i]);
  llong cnt;
  cnt=mergesort(A,0,n);
  printf("%lld\n",cnt);
  return 0;
}