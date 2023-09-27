#include <iostream>
#include <vector>
 
using namespace std;
 
const int MAX = 100000;
vector<int> num(MAX);
 
int main() {
    int n, k;

    while (cin>>n>>k, n||k) {
      int sum = 0;
      int ans = 0;

      for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (i < k) { 
          sum += num[i]; 
          ans = sum; 
        }
        else { 
          sum = sum + num[i] - num[i-k]; 
          ans = max(ans, sum); 
        }
      }
      cout << ans << endl;
    }
 
  return 0;
}