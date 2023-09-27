#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <numeric>
#include <functional>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()

using namespace std;
typedef long long ll;

int N, x, xMin, ans;

int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N;
  cin >> x;
  xMin = x;
  ans = -(1 << 30);
  REP(i,N-1){
    cin >> x;
    ans = max(ans, x - xMin);
    xMin = min(x, xMin);
  }
  cout << ans << endl;
  
  return 0;
}