#include<iostream>
using namespace std;
int main(){
  int n,minj,count=0;
  int a[101]={};
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];

  for(int i=0;i<n;i++){
      minj = i;
    for(int j=i;j<n;j++)
      if(a[j]<a[minj])
	minj = j;
    if(i!=minj){
      swap(a[i],a[minj]);
      count++;
    }
  }
    for(int i=0;i<n-1;i++)
      cout<<a[i]<<' ';
    cout<<a[n-1]<<endl<<count<<endl;
    return 0;
}