#include <iostream>
using namespace std;

int n, y, m, d;

void solve() {
  int sum = 0;

  while(y < 1000) {
    sum++;
    d++;
    if(y%3 && m%2 == 0 && d == 20) {
      d = 1;
      m++;
    }
    else if(d > 20) {
      d = 1;
      m++;
    }
    if(m > 10) {
      m = 1;
      y++;
    }
  }

  cout << sum << endl;
}

int main() {
  while(cin >> n) {
    for(int i = 0; i < n; ++i) {
      cin >> y >> m >> d;
      solve();
    }
  }
}

