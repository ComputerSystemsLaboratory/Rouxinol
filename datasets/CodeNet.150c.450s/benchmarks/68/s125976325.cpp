#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
  int p=100000000;
  for(int i=0;i<n-1;i++)p=min(p,a[i+1]-a[i]);
    cout<<p<<endl;
}
}