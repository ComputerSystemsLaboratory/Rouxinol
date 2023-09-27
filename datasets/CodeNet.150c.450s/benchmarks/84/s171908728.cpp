#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
unsigned long long cnt;

void merge(int a[],int left,int mid ,int right){
  int n1=mid-left,n2=right-mid;
  int l[n1+1],r[n2+1];
  for(int i=0;i<n1;i++)
    l[i]=a[left+i];
  for(int i=0;i<n2;i++)
    r[i]=a[mid+i];
  l[n1]=r[n2]=1+pow(10,9);
  int i=0,j=0,k;
  for(k=left;k<right;k++){
    if(l[i]<=r[j]){
      a[k]=l[i];
      i++;

    }
    else{
      a[k]=r[j];
      j++;
      cnt+=right-k-j;

    }
  }
}
void mergesort(int a[],int left,int right){
  int mid;
  if(left+1<right){
    mid = (left +right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid,right);
    merge(a,left,mid,right);
  }
}

int main(){
  int n,i;
  cin>>n;
  int s[n];
  for(i=0;i<n;i++)
    cin>>s[i];
  mergesort(s,0,n);
  cout<<cnt<<endl;
  return 0;
}

