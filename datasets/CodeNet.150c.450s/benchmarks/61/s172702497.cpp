#include <iostream>
#include <vector>
using namespace std;

int n, a, b, c, x;

int f(int x) {
  return (a*x+b)%c;
}

int main() {
  while(cin >> n >> a >> b >> c >> x, n) {
    int ans = 0;
    vector<int> in(n);
    for(int i=0; i<n; i++) cin >> in[i];
    int i, j=0;
    for(i=0; i<=10000; i++) {
      if(x == in[j]) {
	j ++;
	if(j == n) break;
      }
      x = f(x);
    }
    if(i == 10001) cout << -1 << endl;
    else cout << i << endl;
  }
  
  return 0;
}