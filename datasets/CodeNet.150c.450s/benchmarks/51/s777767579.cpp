#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  bool s[30];

  fill(s, s+30, true);

  for(int i = 0; i < 28; i++) {
    cin >> n;
    s[n-1] = false;
  }

  for(int i = 0; i < 30; i++) {
    if(s[i]) cout << i+1 << endl;
  }
}