#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int k=10000;
int b[2000000];
void countingsort(int a[],int n){
  int c[k+1],j;
  for(int i=0;i<=k;i++)c[i]=0;
  for(j=0;j<n;j++)
    c[a[j]]++;
  for(int i=0;i<=k;i++)c[i]=c[i]+c[i-1];
  //cout<<"finish:"<<j<<endl;
  j--;
  for(;j>-1;j--){
    b[c[a[j]]] = a[j];
    c[a[j]]--;
  }
}
int main(){
  int n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)cin>>a[i];
  countingsort(a,n);

  for(i=1;i<n;i++)cout<<b[i]<<" ";
  cout<<b[i]<<endl;


  return 0;
}

