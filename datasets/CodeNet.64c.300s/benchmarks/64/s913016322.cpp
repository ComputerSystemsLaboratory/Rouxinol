#include <iostream>
using std::cout;
using std::endl;
using std::cin;

unsigned euclidean_gcd(unsigned a,unsigned b){ //a:large one,b:small one
  unsigned t;
  while(1){
    if(a<b) t=a,a=b,b=t;
    if(!b) break;
    a%=b;
  }
  return a;
}

int main(){
  int a,b;
  cin >> a >> b;
  int r = euclidean_gcd(a,b);
  cout << r << endl;
}