#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
int memo[31];
int f(int n){
  if(n<0) return 0;
  if(n<2) return 1;
  if(memo[n]!=-1) return memo[n];
  return (memo[n]=f(n-1)+f(n-2)+f(n-3));
}

int main(void){
  memset(memo,-1,sizeof(memo));
  int n;
  while(cin>>n){
    if(n==0)break;
    cout<<f(n)/3650+1<<endl;
  }
  return 0;
}