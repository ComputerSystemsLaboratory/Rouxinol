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

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  while(true){
	int N; cin >> N; if(!N) break;
	vector<PII> pos(N);
	pos[0].first = 0;
	pos[0].second = 0;
	int mx = 0, Mx = 0, my = 0, My = 0;
	for(int i=1;i<N;++i){
	  int n, d; cin >> n >> d;
	  pos[i].first = pos[n].first + dx[d];
	  pos[i].second = pos[n].second + dy[d];
	  mx = min(mx, pos[i].first);
	  Mx = max(Mx, pos[i].first);
	  my = min(my, pos[i].second);
	  My = max(My, pos[i].second);
	}
	//cout << mx <<"," << Mx << " " << my << "," << My << endl;
	cout << Mx - mx + 1 << " " << My - my + 1 << endl;
  }
  
  return 0;
}