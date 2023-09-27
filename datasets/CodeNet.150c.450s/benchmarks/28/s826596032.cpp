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

  int N, K;
  cin >> N >> K;
  VI ws(N);
  REP(i,N) cin >> ws[i];

  LL lo = 0, up = 1e9, ans;
  while(lo+1 < up){
	LL mid = (lo + up) / 2;
	LL cnt = 0, acc = mid;
	REP(i,N){
	  if(ws[i] > mid){
		cnt = K+1; break;
	  }
	  if(acc + ws[i] > mid){
		++cnt;
		acc = ws[i];
	  }
	  else
		acc += ws[i];
	}
	if(cnt <= K)
	  up = mid, ans = mid;
	else
	  lo = mid;
  }

  cout << ans << endl;
  
  return 0;
}