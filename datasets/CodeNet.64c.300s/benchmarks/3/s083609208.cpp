#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){

  int n,i,j,tmp;
  int a[256];

  cin >>n;

  for(i=0;i<n;i++){
    cin >>a[i];
  }
  for(i=0,j=n-1;i<j;i++,j--){
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
  }
  for(i=0;i<n-1;i++){
    printf("%d ",a[i]);
  }printf("%d",a[n-1]);
  cout <<endl;
  return 0;
}