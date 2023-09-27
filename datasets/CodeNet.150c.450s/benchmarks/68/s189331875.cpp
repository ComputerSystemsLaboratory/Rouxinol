#include<iostream>
#include<algorithm>
using namespace std;
int a[10000];
int main(){
  int n;
  while(cin>>n,n){

  for(int i=0;i<n;i++)cin>>a[i];
  int ans=1000000;
  sort(a,a+n);
  for(int i=1;i<n;i++)ans=min(ans,abs(a[i]-a[i-1]));
  cout<<ans<<endl;
  for(int i=0;i<n;i++)a[i]=0;
  }
  return 0;
}