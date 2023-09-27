#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x;
  while(1) {
    cin >> n >> x;
    int count = 0;
    if(n == 0 && x == 0) break;
    for(int a = 1; a <= n; ++a) {
      for(int b = a + 1; b <= n; ++b) {
        for(int c = b + 1;c <= n; ++c) {
          if(a + b + c == x) ++count;
        }
      }
    }
    cout << count << endl;
  }
}