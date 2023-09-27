#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,b,c,n=0;
  cin >> a >> b >> c;

  for (int i=1; i<=c; i++) {
    if (c%i == 0) {
      if (a <= i && i <= b) {
        n++;
      }
    }
  }
  cout << n << endl;
  return 0;
}

