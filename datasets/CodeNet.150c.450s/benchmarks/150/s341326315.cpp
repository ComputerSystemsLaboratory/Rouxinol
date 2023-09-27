#include <iostream>
using namespace std;
int a[2000001],b[2000001];


void CountingSort(int n){
  int c[10001]={};
  for(int i=0;i<n;i++) c[a[i]]++;
  for(int i=1;i<=10000;i++) c[i]+=c[i-1];
  for(int i=n-1;i>=0;i--) {
    b[c[a[i]]-1]=a[i];
    c[a[i]]--;
  }
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  CountingSort(n);
  for(int i=0;i<n-1;i++) cout << b[i]<<" ";
  cout <<b[n-1]<<endl;
  return 0;
}