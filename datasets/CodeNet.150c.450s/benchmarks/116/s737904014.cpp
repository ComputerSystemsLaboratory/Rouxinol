#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  while (true) {
    int n,k;
    cin >> n >> k;
    if(n == 0 && k == 0)
      return 0;

    int sum[n+1];
    sum[0] = 0;

    for (int i = 0; i < n; i++){
      int s;
      cin >> s;
      sum[i+1] = sum[i] + s;
    }

    int ans = -1987654321;

    for (int i = 0; i < n-k; i++){
      int tmp = sum[i+k] - sum[i];
      if(tmp > ans)
        ans = tmp;
    }

    cout << ans << endl;
  }
  return 0;
}