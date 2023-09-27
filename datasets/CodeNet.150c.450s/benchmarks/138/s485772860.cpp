#include <iostream>

using namespace std;

int gcd(int a, int b){
  int mod = !0;
  while(mod != 0 ){
    mod = a % b;
    if (mod > b){
      a = mod;
    } else {
      a = b;
      b = mod;
    }
  }
  return a;
}
int main(int argc, char const *argv[]) {
  int x, y;
  cin >> x >> y;
  cout << gcd(x,y) << endl;
  return 0;
}