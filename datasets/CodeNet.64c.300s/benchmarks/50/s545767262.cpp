#include<iostream>
using namespace std;
int main(){
  int n,a[100],c=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n-1;i++) 
    for(int j=n-1;i<j;j--){
      int tmp=a[j];
      if(a[j-1]>a[j])a[j]=a[j-1],a[j-1]=tmp,c++;
    }
  for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[n-1]<<endl;
  cout<<c<<endl;
  return 0;
}