#include <iostream>
#include <cmath>
using namespace std;

int main(void){
  int n, res;
  double buf;
  while(cin >> n){
    res = 0;
    for(int i=0;i<=600-n;i+=n){
      res += pow(i,2) * n;
    }
    cout << res << endl;
  }
  return 0;
}