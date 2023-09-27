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
  int N;
  while(cin >> N, N){
	//vector<PII> tms;
	int range[24*60*60+1];
	fill(range, range+24*60*60+1, 0);
	REP(i,N){
	  int h[2], m[2], s[2];
	  scanf("%2d:%2d:%2d", &h[0], &m[0], &s[0]);
	  scanf("%2d:%2d:%2d", &h[1], &m[1], &s[1]);
	  int st = h[0]*60*60+m[0]*60+s[0], et = h[1]*60*60+m[1]*60+s[1];
	  ++range[st], --range[et];
	}
	//SORT(tms);
	int ans = 0, acc = 0;
	REP(i,24*60*60){
	  acc += range[i];
	  ans = max(ans, acc);
	}
	cout << ans << endl;
  }  
  
  return 0;
}