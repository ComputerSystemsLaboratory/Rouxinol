#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int ans = 0;
    for(int i = 1; i*2 < n; i++) {
      int sum = 2*i + 1;
      for(int j = 2; sum <= n; j++) {
	if(sum == n) {
	  ans++;
	  break;
	}
	else sum += i+j;
      }
    }
    cout << ans << endl;
  }
}