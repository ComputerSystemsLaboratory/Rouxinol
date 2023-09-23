#include <iostream>
using namespace std;

long long step[40];

void count() {
  step[0] = 1;
  step[1] = 1;
  step[2] = 2;
  for(int i = 3; i < 40; i++) {
    step[i] = step[i-1] + step[i-2] + step[i-3];
  }
}

int main() {
  int n;
  count();
  while(cin >> n, n) {
    int ans = step[n]/3650 + 1;
    cout << ans << endl;
  }
}