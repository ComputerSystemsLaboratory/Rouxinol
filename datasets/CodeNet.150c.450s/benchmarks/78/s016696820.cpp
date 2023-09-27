
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  vector<int> v(200);
  FOR(i,0,200) v[i] = i * (i + 1) * (i + 2) / 6;

  int dp[1000006];
  FOR(i,0,1000006) dp[i] = 1e9;
  dp[0] = 0;
  FOR(i,0,1000006) {
    FOR(j,0,v.size()) {
      if(i - v[j] >= 0) dp[i] = min(dp[i], dp[i - v[j]] + 1);
    }
  }

  int dp_even[1000006];
  FOR(i,0,1000006) dp_even[i] = 1e9;
  dp_even[0] = 0;
  FOR(i,0,1000006) {
    FOR(j,0,v.size()) {
      if(v[j]%2 == 0) continue;
      if(i - v[j] >= 0) dp_even[i] = min(dp_even[i], dp_even[i - v[j]] + 1);
    }
  }
  while(cin>>n,n) {
    cout << dp[n] << " " << dp_even[n] << endl;
  }
  return 0;
}