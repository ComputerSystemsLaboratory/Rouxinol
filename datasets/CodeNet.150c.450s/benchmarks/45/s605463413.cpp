#include <iostream>
#include <cmath>
using namespace	std;
int main(){

  long long m,n,result=1;

  cin>>m>>n;

  while(n!=1){
    if(n%2) result=(result*m)%1000000007;
    m=(m*m)%1000000007;
    n/=2;
  }

  cout<<(result*m)%1000000007<<endl;

  return 0;

}