#include <iostream>
#include <vector>
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, s, n) for(int i = s; i < n; i++)
using namespace std;

vector<int> r(100), c(100);
vector<vector<int>> dp(100, vector<int>(100, -1));
int rec(int left, int right){
  if (right - left == 0) return 0;
  if (right - left == 1) return r[left] * r[right] * c[right];
  if (dp[left][right] != -1) return dp[left][right];
  int min;
  rep2(mid, left, right){
    min = rec(left, mid) + rec(mid+1, right) + r[left] * c[mid] * c[right];
    if (dp[left][right] == -1 || dp[left][right] > min) dp[left][right] = min;
  }
  return dp[left][right];
}

int main(){
  int n;
  cin >> n;
  rep(i, n) cin >> r[i] >> c[i];
  int ans = rec(0, n-1);
  cout << ans << endl;
  return 0;
}
