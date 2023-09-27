#include<iostream>
#include<algorithm>
using namespace std;

int n, m, cnt;
int data[22];
int memo[22][50001];

int solve(int i, int p){

  if(!p) return 0;
  if(p < 0 || i == m) return 1<<28;
  if(memo[i][p]) return memo[i][p];
  
  int ans = 0;
  
  //cout << i << " " << p << endl;
  return memo[i][p] = ans += min(solve(i+1, p), min(solve(i, p-data[i]), solve(i+1, p-data[i]))+1);

}

int main(){

  cin >> n >> m;

  for(int i=0;i<m;i++) cin >> data[i];

  cout << solve(0, n) << endl;

}