//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <queue>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  while(true){
	int n, m; cin >> n >> m; if(n == 0 && m == 0) break;
	VI a(n), b(m);
	REP(i,n) cin >> a[i];
	REP(i,m) cin >> b[i];

	int tot1 = accumulate(ALL(a), 0);
	int tot2 = accumulate(ALL(b), 0);
	int sum = 999;
	PII ans;
	REP(i,n) REP(j,m)
	  if(tot1-a[i]+b[j] == tot2-b[j]+a[i])
		if(a[i] + b[j] < sum){
		  ans.first = a[i];
		  ans.second = b[j];
		  sum = a[i] + b[j];
		}
	if(sum != 999)
	  cout << ans.first << " " << ans.second << endl;
	else
	  cout << -1 << endl;
  }
  
  return 0;
}