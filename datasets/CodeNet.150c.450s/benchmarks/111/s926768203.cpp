#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f

#include <iostream>
#include <cstdio>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>
  
using namespace std;
  
typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P> PP;
  
static const double EPS = 1e-8;
  
static const int tx[] = {0,1,0,-1};
static const int ty[] = {-1,0,1,0};

int main(){
  int n;
  while(~scanf("%d",&n)){
    ll dp[101][21];
    memset(dp,0,sizeof(dp));

    int first;
    scanf("%d",&first);
    dp[0][first] = 1;

    for(int i=0;i<n-2;i++){
      int num;
      scanf("%d",&num);
      for(int from = 0; from <= 20; from++){
	if(dp[i][from] > 0){
	  if(from+num <= 20){
	    dp[i+1][from+num] += dp[i][from];
	  }
	  if(from-num >=0){
	    dp[i+1][from-num] += dp[i][from];
	  }
	}
      }
    }
    int target_num;
    scanf("%d",&target_num);
    printf("%lld\n",dp[n-2][target_num]);
  }
}