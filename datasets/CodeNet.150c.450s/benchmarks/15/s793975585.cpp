#include<iostream>
using namespace std;
int main(){
  int n,a[10000],m,b,ans=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  cin>>m;
  while(m--){
    cin>>b;
    for(int i=0;i<n;i++)
      if(a[i]==b){ans++;break;}
  }
  cout<<ans<<endl;
  return 0;
}