#include <iostream>
#include <algorithm>
using namespace std;

int gcd(long long int a,long long int b){
  return __gcd(a,b);
}
int lcm(long long int a,long long int b){
  return a*b/gcd(a,b);
}

int main(void){
  long long int a,b;
  while(cin>>a>>b){
    long long int ma = max(a,b);
    long long int mi = min(a,b);
    cout<<gcd(ma,mi)<<" "<<lcm(ma,mi)<<endl;
  }
}