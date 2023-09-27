#include <bits/stdc++.h>
using namespace std;

int n, m;
int c[20];
int lp[50005] = {};

int solve(int x){
  if(lp[x] != 0)
    return lp[x];
  int t = INT_MAX;
  for(int i = 0; i < m; i++)
    if(x > c[i])
      t = min(t, solve(x - c[i]) + 1);
  lp[x] = t;
  return t;
}

int main(){
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    cin >> c[i];
    lp[c[i]] = 1;
  }
  cout << solve(n) << endl;
}