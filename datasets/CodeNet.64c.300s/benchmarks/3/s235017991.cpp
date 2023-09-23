#include<iostream>
using namespace std;

int main()
{
  int n,tmp;
  int a[101];
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n/2;i++){
    tmp=a[i];
    a[i]=a[n-1-i];
    a[n-i-1]=tmp;
  }
  for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[n-1]<<endl;
  return 0;
}
  