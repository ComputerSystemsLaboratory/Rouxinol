#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>
#include <cstring>
#include <typeinfo>
#include <utility>
//#define REP(i,n) for(int i = 0;i < n ;i++)
//#define FOR(i,m,n) for(int i= m ;i<n;i++)
#define PI acos(-1);
#define max_n 100
#define max_w 10000
using namespace std;

long long int N,W;
vector<int>v(max_n),w(max_n);
long long int dp[max_n+1][max_w+1];
int rec(int i,int j){//i=?????° j=??????

  if(dp[i][j]>=0)return dp[i][j];
  int res;
  if(i==N)res=0;
  else if(j<w[i])res=rec(i+1,j);
  else{
    res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
  }
  dp[i][j]=res;
  return res;
}

int main(void){
  cin >> N >> W;
  long long int k;
  memset(dp,-1,sizeof(dp));
  for(k=0;k<N;k++){
    cin >> v[k] >> w[k];
  }
  cout << rec(0,W) << endl;

  return 0;
}