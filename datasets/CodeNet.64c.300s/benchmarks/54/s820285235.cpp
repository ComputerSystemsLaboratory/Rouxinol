#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
#include <sstream>
#include <cstdio>
#include <complex>
#include <cstring>
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)
#define pb(a) push_back(a)
int GCD(int a, int b) {if(!b) return a; return gcd(b, a%b);}
int lcm(int a, int b) {return a*b / gcd(a, b);}

int main(void){
  long long dp[110][25];
  int sum[110];
  int n;
  cin>>n;
  
  loop(i,1,n+1)cin>>sum[i];
  memset(dp,0,sizeof(dp));

  dp[1][sum[1]] = 1;
  loop(i,2,n){
    loop(j,0,20+1){
      if(j+sum[i] <= 20)dp[i][j+sum[i]] += dp[i-1][j];
      if(0 <= j-sum[i]) dp[i][j-sum[i]] += dp[i-1][j];
    }
  }
  cout<<dp[n-1][sum[n]]<<endl;
}