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
  }
  cout<<ans<<endl;
  return 0;
}