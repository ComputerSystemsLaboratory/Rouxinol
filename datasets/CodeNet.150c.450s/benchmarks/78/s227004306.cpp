#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <complex>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;

#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 1000100

int dp[SIZE], dp_o[SIZE];

int main(){
  for(int i=0;i<SIZE;i++) dp[i] = dp_o[i] = i;

  for(int i=2;(ll)i*(i+1)*(i+2)<SIZE*6;i++){
    int num = (ll)i*(i+1)*(i+2)/6;

    for(int j=0;j<SIZE-num;j++){
      dp[j+num] = min(dp[j+num], dp[j] + 1);
      if(num%2)
        dp_o[j+num] = min(dp_o[j+num], dp_o[j] + 1);
    }
  }

  int n;

  while(1){
    scanf("%d", &n);
    if(!n) break;

    printf("%d %d\n", dp[n], dp_o[n]);
  }
  
  return 0;
}

