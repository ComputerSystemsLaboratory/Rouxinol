#include<iostream>
using namespace std;

void solve(int n) {
  int ans = 0;
  int high = 0;
  int c = n;
  while(c < 600) {
    high = c * c;
    ans += high * n;
    c += n;
  }
  cout << ans << endl;
}

int main(void) {

  int n;
  while(cin >> n) {
    solve(n);
  }
  return 0;
}