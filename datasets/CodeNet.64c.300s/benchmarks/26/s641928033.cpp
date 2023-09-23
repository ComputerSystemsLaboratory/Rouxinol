#include <iostream>
using namespace std;
#define king 1000000007

int main(){
  long long m,n,sum=1;
  cin>>m>>n;
  while(n!=1){
    if(n%2==1){
      sum=sum*m%king;
    }
    m=m*m%king;
    n/=2;
  }
  m=m*sum%king;
  cout<<m<<endl;
  return 0;
}