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

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int n,k;
  int a[100001];
  while(cin>>n>>k){
    if(n==0) break;
    REP(i,n)cin>>a[i];
    int sum = 0;
    int mx;
    REP(i,k){
      sum+=a[i];
    }
    mx = sum;
    for(int i=k;i<n;i++){
      sum-=a[i-k];
      sum+=a[i];
      mx = max(sum,mx);
    }
    cout<<mx<<endl;
  }
  return 0;
}