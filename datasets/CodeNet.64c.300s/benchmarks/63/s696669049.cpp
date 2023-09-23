#include <iostream>
using namespace std;

int gcd(int a,int b) {
  if(a < b) {
    int t = a;
    a = b;
    b = t;
  }
  if(b == 0)
    return  a;
  else
    return gcd(b,a%b);
}

int lcm(int a,int b) {
  return (a/gcd(a,b))*b;
}


int main() {
  int a,b;
  while(cin >> a >> b) {
    cout << gcd(a,b) << " " << lcm(a,b) << endl;
  }
}