#include<iostream>
using namespace std;

int main(){
  int n,ans=100000;
  cin>>n;
  while(n--){
    ans*=1.05;
    if(ans%1000>0){
      ans/=1000;
      ans*=1000;
      ans+=1000;
    }
  }
  cout<<ans<<endl;
}