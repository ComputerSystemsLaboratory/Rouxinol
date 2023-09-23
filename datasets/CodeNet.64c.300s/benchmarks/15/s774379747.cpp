#include<iostream>
using namespace std;
int main(){
  int n,a[100],c=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n-1;i++){ 
    int mini=i;
    for(int j=i;j<n;j++){
      if(a[j]<a[mini])mini=j;
    }
    int tmp=a[i];
    if(mini!=i)c++,a[i]=a[mini],a[mini]=tmp;
  }
  for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[n-1]<<endl;
  cout<<c<<endl;
  return 0;
}