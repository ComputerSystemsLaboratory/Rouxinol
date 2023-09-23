#include<iostream>
using namespace std;

int main(){
  int n,a,f,ans=0;
  cin>>n;
  while(n--){
    cin>>a;
    f=0;
    for(int i=2;i*i<=a;i++)
      if(!(a%i))f=1;
    if(!f)ans++;
    if(a==1)f=1;
  }
  cout<<ans<<endl;
  return 0;
}