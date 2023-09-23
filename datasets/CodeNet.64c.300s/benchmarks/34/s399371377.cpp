#include<iostream>
using namespace std;

int main(){
  int n,key;
  int a[1001],i;

  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
   for(int k=0;k<n-1;k++) cout<<a[k]<<" ";
 cout<<a[n-1]<<endl;
  for(int j=1;j<n;j++){
    key=a[j];
    i=j-1;
    while(i>=0 && a[i]>key){
      a[i+1]=a[i];
      i=i-1;
      a[i+1]=key;
    } for(int k=0;k<n-1;k++) cout<<a[k]<<" ";
 cout<<a[n-1]<<endl;
   }
  return 0;
}