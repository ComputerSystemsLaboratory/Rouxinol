#include<iostream>
#include<algorithm>
using namespace std;
int n,a,b;
int t[100000];
int main(){

  while(cin>>n>>a>>b,n||a||b){
  for(int i=0;i<n;i++)cin>>t[i];
  int ans=0;
    sort(t,t+n);
    reverse(t,t+n);
    //cout<<t[0]:
    int ans2=0;
    for(int i=a-1;i<b;i++){
      //cout<<t[i]-t[i+1]<<endl;
      if(ans<=t[i]-t[i+1]){
        ans=t[i]-t[i+1];
        ans2=i+1;
      }
    }
    cout<<ans2<<endl;
  }
  return 0;
}