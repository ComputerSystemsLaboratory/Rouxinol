#include <iostream>
using namespace	std;
int main(){

  int n,a[45],i;

  cin>>n;
  a[0]=1;
  a[1]=1;

  for(i=2;i<=n;i++) a[i]=a[i-2]+a[i-1];

  cout<<a[n]<<endl;

  return 0;

}