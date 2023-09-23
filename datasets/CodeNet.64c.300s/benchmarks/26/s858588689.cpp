#include <iostream>
#define inf 1000000007
using namespace	std;
int main(){

  long long m,n,r=1;

  cin>>m>>n;

  while(n!=1){
    if(n%2) r=(r*m)%inf;
    m=(m*m)%inf;
    n/=2;
  }

  cout<<(r*m)%inf<<endl;

  return 0;

}