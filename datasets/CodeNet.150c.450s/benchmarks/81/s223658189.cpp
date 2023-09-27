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
	int N;
	cin >> N; if(N == 0) break;
	VVI edge(20, VI(20, 123456789));
	vector<bool> use(20, false);
	REP(i,N){
	  int a, b, c; cin >> a >> b >> c;
	  edge[a][b] = edge[b][a] = c;
	  use[a] = use[b] = true;
	}
	REP(i,20) edge[i][i] = 0;

	VI t;
	REP(i,20) if(use[i]) t.PB(i);
	int M = SZ(t);

	REP(i,M) REP(j, M) REP(k,M){
	  int a = t[i], b = t[j], c = t[k];
	  edge[b][c] = min(edge[b][c], edge[b][a] + edge[a][c]);
	}
	
	int idx, ans = 1234567890;
	REP(i,M){
	  int st = t[i];
	  int sum = 0;
	  REP(j,M){
		int to = t[j];
		sum += edge[st][to];
	  }
	  if(sum < ans){
		idx = st;
		ans = sum;
	  }
	}
	cout << idx << " " << ans << endl;
  }

  return 0;
}