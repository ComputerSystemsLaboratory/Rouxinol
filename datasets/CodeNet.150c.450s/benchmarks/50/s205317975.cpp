#include <iostream>
#include <cstdio>
using namespace std;
int main(void) {
  int V, C, sum;
  int coin[6] = {1, 5, 10, 50, 100, 500};
  while(cin >> V, V != 0) {
    sum = 0;
    C = 1000 - V;
    for(int i = 5 ; i >= 0 ; i--) {
      int t = C / coin[i];
      C -= t * coin[i];
      sum += t;
    }
    cout << sum << endl;
  }
  return 0;
}