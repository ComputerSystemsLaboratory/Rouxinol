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

  int R, C;
  while(cin>>R>>C,R){
	int ans = 0;
	vector<vector<bool>> senbei(R, vector<bool>(C, false));
	REP(y,R) REP(x,C){
	  int b; cin >> b;
	  senbei[y][x] = !b;
	}

	for(int bit=0;bit<(1<<R);++bit){
	  int sum = 0;
	  REP(i,C){
		int cnt = 0;
		REP(j,R)
		  if(((bit>>j&1) && !senbei[j][i])
			 || (!(bit>>j&1) && senbei[j][i])) ++cnt;
		sum += max(cnt, R-cnt);
	  }
	  ans = max(ans, sum);
	}
	cout << ans << endl;
  }
  
  return 0;
}