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

int W, H;
bool used[110][110];
char ma[110][110];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void dfs(int x, int y, char ch){
  if(used[y][x] || ma[y][x] != ch) return;
  used[y][x] = true;

  REP(i,4)
	dfs(x+dx[i], y+dy[i], ch);
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  while(true){
	cin >> H >> W;
	if(W == H && H == 0) break;
	fill((char*)ma, (char*)ma+110*110, 0);
	REP(y,H)
	  REP(x,W)
	  cin >> ma[y+1][x+1];

	fill((bool*)used, (bool*)used + 110*110, false);
	int cnt = 0;
	for(int y=1;y<=H;++y)
	  for(int x=1;x<=W;++x)
		if(!used[y][x]){
		  ++cnt;
		  dfs(x,y, ma[y][x]);
		}
	cout << cnt << endl;
  }

  return 0;
}