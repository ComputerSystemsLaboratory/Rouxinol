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

int n;
ll dp[101][21];

int main(void){
  int a;
  cin>>n;
  cin>>a;
  dp[0][a] ++;

  for(int i = 1 ; i < n - 1 ; i ++){
    cin>>a;
    for(int j = 0 ; j <= 20 ; j ++){
      if( j - a >= 0){
	dp[i][j-a] += dp[i-1][j];
      }
      if( j + a <= 20){
	dp[i][j+a] += dp[i-1][j];
      }
    }
  }
  cin>>a;
  cout<<dp[n-2][a]<<endl;

}