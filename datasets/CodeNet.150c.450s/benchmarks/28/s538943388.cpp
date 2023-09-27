#include<iostream>
#include<stdio.h>
using namespace std;

int ok(int P,int n,int w[],int k){
  int i=0;
  for(int j=0;j<k;j++){
    int s=0;
    while(s+w[i]<=P){
      s+=w[i];
      i++;
      if(i==n) return n;
    }
  } 
  return i;
}
int main(){
  int n,k;
  cin>>n>>k;
  int w[n];
  for(int i=0;i<n;i++){
    cin>>w[i];
  }
  int l=0,h=1000000000;
  while(l+1<h){
    int m=(l+h)/2;
    if(ok(m,n,w,k)>=n) h=m; else l=m;
  }
  printf("%d\n",l+1);
  return 0;
}