# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>
 
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)
 
using namespace std;

int main(){
  int N,W;
  int v[30];
  int dp[50005] = {0};
  cin >> N >> W;
  rep(i, W){
    cin >> v[i];
  }
  rep(i,N+1){
  	dp[i] = i;
  }
  rep(i,W){
  	rep(j,N+1){
  		if ((j-v[i])>-1){
  			dp[j] = min(dp[j-v[i]]+1, dp[j]);
  		}
  	}
  }
  cout << dp[N] << endl;
}