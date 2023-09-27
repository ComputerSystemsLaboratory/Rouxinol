#include<bits/stdc++.h>
using namespace std;
int main(){ 
  int n,flag=0,min;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++){
    min=i;
    for(int j=i;j<n;j++){
      if(a[j]<a[min])min=j;
      if(j==n-1&&i!=min){
	swap(a[i],a[min]);
	flag++;
      }
    }
    if(i==n-1)cout<<a[i]<<endl;
    else cout<<a[i]<<" ";
  }
  cout<<flag<<endl;
  return 0;
}