#include <iostream>

using namespace std;

long long Fact(int n);
int main(){
  int n;
  cin>>n;
  cout<<Fact(n)<<endl;
  return 0;
}

long long Fact(int n){
  long long fact=1;
  for( int i=1;i<=n;i++ ){
    fact*=i;
  }
  return fact;
}