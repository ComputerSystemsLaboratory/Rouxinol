#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <utility>
#include <memory>
#include <functional>
#include <deque>
#include <cctype>
#include <numeric>
#include <ctime>
#include <bitset>
#include <cctype>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

//define
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define dump(x)  cerr << #x << " = " << (x) << endl;

#define INF (INT_MAX/2)
#define PI (2*acos(0.0))
#define EPS (1e-8)

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef vector<int> vint;
typedef vector<vector<int> > vvint;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dp[1001][1001];

int main(void){
  ios_base::sync_with_stdio(0);
  int N;  cin >> N;
  while(N--){
    string a, b;  cin >> a >> b;
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < a.size(); i++){
      for(int j = 0; j < b.size(); j++){
        if(a[i] == b[j]) dp[i+1][j+1] = dp[i][j] + 1;
        else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
      }
    }
    cout << dp[a.size()][b.size()] << endl;
  }
  return 0; 
}