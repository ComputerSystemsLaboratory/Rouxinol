#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 1e9

int main(void){
  int n, input;
  cin >> n;
  
  vector<int> dp(n + 2, INF);
  dp[0] = -INF;
  
  for(int i = 0; i < n; i++){
    cin >> input;
    vector<int>::iterator it
      = upper_bound(dp.begin(), dp.end(), input);
    if(*(it - 1) < input)
      *it = input;
  }

  int ans = 0;
  while(dp[ans + 1] < INF){ ++ans; }
  cout << ans << endl;
  
  return 0;
}

