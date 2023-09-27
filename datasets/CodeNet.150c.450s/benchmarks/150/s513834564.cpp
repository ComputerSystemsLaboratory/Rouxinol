#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define K 10000

int main(){
  int *a,*b;
  int n;
  int c[K+1]={};
  cin>>n;
  n++;
  a=(int*)malloc(sizeof(int)*n);
  b=(int*)malloc(sizeof(int)*n);

  for(int i=1;i<n;i++){
    cin>>a[i];
    c[a[i]]++;
  }
  for(int i=1;i<K;i++)c[i]+=c[i-1];

  for(int i=1;i<n;i++){
    b[c[a[i]]]=a[i];
    c[a[i]]--;
  }

  for(int i=1;i<n-1;i++)
    cout<<b[i]<<' ';

  cout<<b[n-1]<<endl;

  return 0;
}