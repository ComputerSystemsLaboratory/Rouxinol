#include <iostream>
using namespace std;

int gcd(int n,int m){
  if(n<m){
    swap(n,m);
  }
  while(m>0){
    int r=n%m;
    n=m;
    m=r;
  }
  return n;
}
  
int main(){
  int n,m;

  cin>>n>>m;

  int ans=gcd(n,m);

  cout<<ans<<endl;
  return 0;
}