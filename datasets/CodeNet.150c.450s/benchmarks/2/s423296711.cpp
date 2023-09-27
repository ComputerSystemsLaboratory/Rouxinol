#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100000];
int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  int tmp=a[n-1],i=-1;
  for(int j=0;j<n-1;j++){
    if(a[j]<=tmp){
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[n-1]);
  for(int j=0;j<n;j++){
    if(j)cout<<" ";
    i+1==j?cout<<'['<<a[j]<<']':cout<<a[j];
  }cout<<endl;
  return 0;
}