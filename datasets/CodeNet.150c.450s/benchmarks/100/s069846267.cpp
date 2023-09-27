#include<iostream>
using namespace std;
typedef long long ll;
int main(){
  ll n,ans=1;
  cin>>n;
  for(ll i=n;i>=1;i--){
    ans*=i;
  }
  cout<<ans<<endl;
  return 0;
}