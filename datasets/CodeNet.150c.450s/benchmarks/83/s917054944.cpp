#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n, w;
vector<vector<int>> dp(500, vector<int>(10500, -1));

vector<int> wv;
vector<int> vv;


int dfs(int step, int maxw)
{
  int res = 0;
  if(dp[step][maxw] != -1) return dp[step][maxw];
  if(step == n) res = 0;
  else if(wv[step] > maxw) res = dfs(step+1, maxw);
  else res = max(dfs(step+1, maxw), dfs(step+1, maxw - wv[step]) + vv[step]);
  return dp[step][maxw] = res;
}

int main(){
  cin >> n >> w;
  for (int i = 0; i < n; i++) {
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    vv.push_back(tmp1);
    wv.push_back(tmp2);
  }

  cout << dfs(0, w) << endl;
}

