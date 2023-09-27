#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#define INF 1e9+1
using namespace std;
int N;
long long ans;
int A[200001];
int l[100002],r[100002];
long long  merge(int a[],int n,int left,int mid,int right){
  int n1=mid-left,n2=right-mid;
  long long cnt=0;
  for(int i=0;i<n1;i++)l[i]=a[i+left];
  for(int i=0;i<n2;i++)r[i]=a[i+mid];
  
  l[n1]=INF;r[n2]=INF;
  int i=0,j=0;
  for(int k=left;k<right;k++){
    if(l[i]<=r[j]){a[k]=l[i];i++;}
    else {a[k]=r[j];j++;cnt+=(n1-i);}
  }
  return cnt;
}
long long  mergesort(int a[],int n,int left,int right){
  if(left+1>=right)return 0;
  long long v1,v2,v3;
  int mid=(left+right)/2;
  v1=mergesort(a,n,left,mid);
 
  v2=mergesort(a,n,mid,right);
 
  v3=merge(a,n,left,mid,right);
 
  return v1+v2+v3;
}
int main(){
  
  scanf("%d",&N);
  for(int i=0;i<N;i++)scanf("%d",&A[i]);
  ans=mergesort(A,N,0,N);
  printf("%lld\n",ans);
  return 0;
}