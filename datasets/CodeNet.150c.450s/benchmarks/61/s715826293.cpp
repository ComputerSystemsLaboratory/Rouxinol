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
	int N, A, B, C, X; cin >> N >> A >> B >> C >> X; if(!N) break;
	VI Y(N);
	REP(i,N) cin >> Y[i];
	vector<bool> used(C);
	int cnt = 0;
	REP(i,N){
	  fill(ALL(used), false);
	  if(i > 0){
		X = (A*X + B) % C;
		++cnt;
	  }
	  while(true){
		if(X == Y[i]) break;
		if(used[X]){
		  cnt = -1;
		  break;
		}
		used[X] = true;
		X = (A*X + B) % C;
		++cnt;
	  }
	  if(cnt < 0 || cnt > 10000){
		cnt = -1;
		break;
	  }
	}
	cout << cnt << endl;
  }
  
  return 0;
}