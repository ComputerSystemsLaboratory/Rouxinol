#include<iostream>
using namespace std;

int main(){
  int n,a,mina,ans=-(1e9);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    if(!i)mina=a;
    else ans=max(ans,a-mina);
    mina=min(mina,a);
  }
  cout<<ans<<endl;
  return 0;
}