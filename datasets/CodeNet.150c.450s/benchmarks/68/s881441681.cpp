#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[1000];
  while(cin>>n,n){
    int mn=1e9;
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  for(int i=1;i<n;i++)mn=min(mn,a[i]-a[i-1]);
  cout<<mn<<endl;
  }
  return 0;
}