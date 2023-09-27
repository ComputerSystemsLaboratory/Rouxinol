#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n){
  if(n==2)
    return true;
  else if(n<2||n%2==0)
    return false;
  for(int i=3;i<=sqrt(n);i++)
    if(n%i==0)
      return false;
  return true;
}
int main(void){
  int n,m,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    if(isprime(m))
      ans++;
  }
  cout<<ans<<endl;
  return 0;
}