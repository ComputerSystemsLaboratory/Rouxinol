#include<iostream>
#define N 100
using namespace std;

int main(){
  int n,a[N],mini,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++){
    mini=i;
    for(int j=i;j<n;j++)
      if(a[j]<a[mini])mini=j;
    if(i!=mini){
      cnt++;
      int t=a[i];
      a[i]=a[mini];
      a[mini]=t;
    }
  }
  for(int i=0;i<n;i++){
    if(i)cout<<' ';
    cout<<a[i];
  }
  cout<<endl<<cnt<<endl;
  return 0;
}