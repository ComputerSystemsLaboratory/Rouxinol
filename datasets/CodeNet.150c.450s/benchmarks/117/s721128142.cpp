#include<iostream>
#include<stdio.h>
using namespace std;
int n,a[500000],cnt;

void mg(int l,int m,int r){
  int n1=m-l,n2=r-m;
  int L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++)L[i]=a[l+i];
  for(int i=0;i<n2;i++)R[i]=a[m+i];
  L[n1]=1000000001,R[n2]=1000000001;
  int i=0,j=0;
  for(int k=l;k<r;k++)cnt++,L[i]<=R[j]?a[k]=L[i++]:a[k]=R[j++];
}

void mgs(int l=0,int r=n){
  if(l+1<r){
    int m=(l+r)/2;
    mgs(l,m);
    mgs(m,r);
    mg(l,m,r);
  }
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++)scanf("%d",&a[i]);
  mgs();
  for(int i=0;i<n;i++){
    if(i)printf(" ");
    printf("%d",a[i]);
  }printf("\n");
  cout<<cnt<<endl;
  return 0;
}