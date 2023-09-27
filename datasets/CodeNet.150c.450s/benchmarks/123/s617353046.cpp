#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

bool is_prime(unsigned i){
  if(i==2)return true;
  if(i==1||!(i%2))return false;
  for(unsigned j=3;j<=sqrt(i);j+=2){
    if(!(i%j))return false;
  }
  return true;
}

int main(){
  int n,t,c=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> t;
    if(is_prime(t))c++;
  }
  cout << c << endl;
}