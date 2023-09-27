#include<iostream>
using namespace std;
int MX(int a,int b){
  if(b>a)return b;
  return a;
}
int main(){
  int n,r[200000],ans=-1000000000,mx;
  cin>>n;
  for(int i=0;i<n;i++)cin>>r[i];
  mx=r[n-1];
  for(int i=n-2;i>=0;i--)ans=MX(ans,mx-r[i]),mx=MX(mx,r[i]);
  cout<<ans<<endl;
  return 0;
}