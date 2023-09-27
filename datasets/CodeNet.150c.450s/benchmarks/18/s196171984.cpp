#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int cnt;
  long long int ans=100000;
  for(int i=0;i<n;++i){
    ans*=105;
    ans/=100;
    cnt=ans%1000;
    ans=ans-cnt;
    if(cnt>=1)
      ans+=1000;
  }
  cout<<ans<<endl;
}