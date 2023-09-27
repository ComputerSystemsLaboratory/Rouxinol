#include<iostream>
using namespace std;

int64_t gcd(const int64_t &a,const int64_t &b){
  if(b==0){
    return a;
  }
  else{
    return gcd(b,a%b);
  }
}

int main(){
  int64_t a,b;
  cin >> a >> b;

  cout << gcd(a,b) << endl;

  return 0;
}