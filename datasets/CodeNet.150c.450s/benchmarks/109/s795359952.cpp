#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << #x << " = " << x << endl;


#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010

bool solve(){
  int n;
  int dp[SIZE] = {};
  vector<pair<int,int> > vec;
  
  scanf("%d",&n);

  if(n == 0) return false;


  for(int i=0;i<n;i++){
    int sh,sm,ss,eh,em,es;
    int s,e;

    scanf("%d:%d:%d %d:%d:%d",&sh,&sm,&ss,&eh,&em,&es);

    s = sh*3600 + sm*60 + ss;
    e = eh*3600 + em*60 + es;

    dp[s]++;
    dp[e]--;
    
  }

  int ans = 0;
  
  for(int i=0;i<24*60*60;i++){
    dp[i+1]+= dp[i];
    ans = max(ans, dp[i]);
  }

  printf("%d\n",ans);

  return true;
}


int main(){

  while(solve());
  
  return 0;
}