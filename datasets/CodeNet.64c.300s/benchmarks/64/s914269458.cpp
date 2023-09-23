#include<iostream>
using namespace std;

int main(void) {
  int a, b, mod;
  cin >> a >> b;
  
  if(a < b) {
    int tmp = a;
    a = b;
    b = tmp;
  }
  while(true) {
    mod = a % b;
    if(mod == 0) {
      break;
    }
    a = b;
    b = mod;
  }

  cout << b << endl;
  return 0;
}