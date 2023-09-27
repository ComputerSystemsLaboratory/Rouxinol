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
  int money;
  while(cin>>money){
    if(money==0)break;
    int oturi = 1000-money;
    int ans = 0;
    ans += oturi/500;
    oturi%=500;
    ans += oturi/100;
    oturi%=100;
    ans += oturi/50;
    oturi%=50;
    ans += oturi/10;
    oturi%=10;
    ans += oturi/5;
    oturi%=5;
    ans += oturi;
    cout<<ans<<endl;
  }
  return 0;
}