#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> vec, vec2;
int dp[1000005], dp2[1000005];

int main(void)
{
  for(long long i = 1; i*(i+1)*(i+2)/6 <= 1000000; i++){
    long long x = i*(i+1)*(i+2)/6;
    if(x % 2) vec2.push_back(x);
    vec.push_back(x);
  }
  //for(int i = 0 ;i < vec.size(); i++) cout << vec[i] << " "; cout << endl;

  for(int i = 0; i <= 1000000; i++) dp[i] = dp2[i] = 1e9;
  dp[0] = dp2[0] = 0;
  for(int i = 0; i < 1000000; i++){
    for(int j = 0; j < vec.size(); j++){
      if(i+vec[j] <= 1000000) dp[i+vec[j]] = min(dp[i+vec[j]], dp[i]+1);
    }
    for(int j = 0; j < vec2.size(); j++){
      if(i+vec2[j] <= 1000000) dp2[i+vec2[j]] = min(dp2[i+vec2[j]], dp2[i]+1);
    }
  }

  while(1){
    cin >> n;
    if(n == 0) break;
    cout << dp[n] << " " << dp2[n] << endl;
  }
  return 0;
}

