#include<iostream>
using namespace std;

int main(){
  int a[100001],n,count=0;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++)
    if(a[i]>a[n-1])
      count++;
    else 
      swap(a[i],a[i-count]);

  for(int i=0;i<n-count-1;i++)
    cout<<a[i]<<' ';
  cout<<'['<<a[n-count-1]<<']'<<' ';
  for(int i=n-count;i<n-1;i++)
    cout<<a[i]<<' ';
  cout<<a[n-1]<<endl;

  return 0;
}