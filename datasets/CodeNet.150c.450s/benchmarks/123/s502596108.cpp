#include<bits/stdc++.h>
using namespace std;
int n,ans=0,a,i;
int sub(int x){
  if(x==2)return true;
  if(x<2||x%2==0)return false;
  i=3;
  while(i<=sqrt(x)){
    if(x%i==0)return false;
    i = i+2;
  }
  return true;
}
int main(){
  cin>>n;
  for(int j=0;j<n;j++){
    cin>>a;
    ans+=sub(a);
  }
  cout<<ans<<endl;
  return 0;
}