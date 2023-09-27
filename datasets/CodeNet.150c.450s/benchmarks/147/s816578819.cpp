#include<iostream>
#include<vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;
int main(void){
  int n;
  cin >> n;
  vector<int> ans(n+1);
  for (int x = 1; x <= 100; x++) {
    for (int y = 1; y <= 100; y++) {
      for (int z = 1; z <= 100; z++) {
        int s = x*x + y*y + z*z;
        s += x*y + y*z + z*x;
        if (s > n) continue;
        ans[s]++;
      }
    }
  }
 
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << endl;
  }
}