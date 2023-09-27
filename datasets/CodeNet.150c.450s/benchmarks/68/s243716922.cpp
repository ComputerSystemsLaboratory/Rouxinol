#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t, n, k, x, ans,a;

  while(1) {
    vector<int> point;
    cin >> n;

    if(n == 0){
      break;
    }

    for(int i = 0; i < n; ++i) {
      cin >> x;
      point.push_back(x);
    }

    sort(point.begin(),point.end());
    reverse(point.begin(),point.end());

    t = point[0];

    for(int i = 1; i < n; ++i) {
      k = point[i];
      if(i == 1){
        ans = t - k;
      }
      else {
        a = t - k;
        if(ans > a){
          ans = a;
        }
      }
      t = k;
    }

    cout << ans << endl;
  }

  return 0;
}