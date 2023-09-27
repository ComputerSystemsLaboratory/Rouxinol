#include<iostream>
using namespace std;

int main(){
  int a[5];
  for(int i=0;i<5;i++)
    cin>>a[i];
  for(int j=0;j<5;j++)
    for(int i=0;i<4;i++)
      if(a[i]<a[i+1]) swap(a[i],a[i+1]);
  for(int i=0;i<4;i++)
    cout<<a[i]<<' ';
  cout<<a[4]<<endl;
  return 0;
}