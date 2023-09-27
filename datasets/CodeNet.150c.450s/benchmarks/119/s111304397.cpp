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

bool tab[60][60];
int dx[] = {-1,0,1,-1,1,-1,0,1};
int dy[] = {-1,-1,-1,0,0,1,1,1};
void dfs(int x, int y){
  if(!tab[y][x]) return;
  tab[y][x] = false;
  for(int i=0;i<8;++i)
	dfs(x+dx[i], y+dy[i]);
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  while(true){
	int W, H; cin >> W >> H;
	if(W == 0) break;
	int ans = 0;
	fill((bool*)tab, (bool*)tab+60*60, false);
	REP(y,H) REP(x,W){
	  int c; cin >> c;
	  tab[y+1][x+1] = c == 1;
	}
	for(int y=1;y<=H;++y)
	  for(int x=1;x<=W;++x)
		if(tab[y][x]){
		  ++ans;
		  dfs(x,y);
		}
	cout << ans << endl;
  }
  
  return 0;
}