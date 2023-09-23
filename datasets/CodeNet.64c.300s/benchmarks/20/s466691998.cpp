#include <iostream>
#include <cmath>

#define B 600

int f(int x);

using namespace std;

int main(void) {
  int d, S = 0;
  while(cin >> d) {
    for(int i = 0; i < B/d; i++) {
      S = S + d*f(i*d);
    }
    cout << S << '\n';
    S = 0;
  }

  return 0;
}

int f(int x) {
  return pow(x,2);
}