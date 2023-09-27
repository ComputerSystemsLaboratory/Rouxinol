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
  int H, W = 5;
  while(cin >> H, H){
	int bl[12][5];
	fill((int*)bl, (int*)bl+12*5, -1);
	REP(i,H) REP(j,W) cin >> bl[i][j];
	bool updated = true;
	int ans = 0;
	while(updated){
	  updated = false;
	  REP(y,H){
		int prv = -1, cnt = 0;
		REP(x,W){
		  if(bl[y][x] != prv){
			if(cnt >= 3){
			  FOR(dx,1,cnt+1)
				bl[y][x-dx] = 0;
			  ans += prv * cnt;
			}
			prv = bl[y][x];
			cnt = 1;
		  }
		  else ++cnt;
		}

		if(cnt >= 3){
		  FOR(dx,1,cnt+1)
			bl[y][W-dx] = 0;
		  ans += prv * cnt;
		}
	  }

	  for(int y=H-1;y>=0;--y){
		REP(x,W){
		  if(bl[y][x] == 0) continue;
		  int ty = y+1;
		  while(bl[ty][x] == 0) ++ty;
		  --ty;
		  if(y != ty){
			bl[ty][x] = bl[y][x];
			bl[y][x] = 0;
			updated = true;
		  }
		}
	  }
	}
	cout << ans << endl;
  }
  
  return 0;
}