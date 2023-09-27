#include<iostream>
#include<vector>
using namespace std;

int v[200], dp[1000001], dp2[1000001];
vector<int> v2;

int main()
{
  v[0] = 1;
  v2.push_back(1);
  for(int i = 1; i < 200; i++)
  {
    v[i] = v[i - 1];
    for(int j = 0; j <= i; j++)
      v[i] += j + 1;
    if(v[i] % 2)
      v2.push_back(v[i]);
  }
  fill(dp, dp + 1000001, 1000000000);
  fill(dp2, dp2 + 1000001, 1000000000);
  dp[0] = dp2[0] = 0;
  for(int i = 0; i <= 1000000; i++)
  {
    for(int j = 0; j < 200; j++)
    {
      if(v[j] <= i)
        dp[i] = min(dp[i], dp[i - v[j]] + 1);
      if(j < v2.size() && v2[j] <= i)
        dp2[i] = min(dp2[i], dp2[i - v2[j]] + 1);
    }
  }
  while(true)
  {
    int n;
    cin >> n;
    if(!n)
      break;
    cout << dp[n] << " " << dp2[n] << endl; 
  }
}