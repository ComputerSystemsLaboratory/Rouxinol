#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  while(cin >> n >> k, n+k) {
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long ans = -10000000000;
    for(int i = 0; i < n-k; i++) {
      long long sum = 0;
      for(int j = 0; j < k; j++) {
	sum += a[i+j];
      }
      if(ans < sum) ans = sum;
    }
    cout << ans << endl;
  }
}