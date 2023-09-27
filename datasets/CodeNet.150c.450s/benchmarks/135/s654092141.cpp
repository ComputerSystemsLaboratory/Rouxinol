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

  int N, M;
  while(cin>>N>>M, N){
	VI h(N+1, 0), w(M+1, 0);
	REP(i,N){
	  int x; cin >> x;
	  h[i+1] = h[i] + x;
	}
	REP(i,M){
	  int x; cin >> x;
	  w[i+1] = w[i] + x;
	}
	LL ans = 0;
	map<int,int> szx, szy;
	for(int i=0;i<=M;++i)
	  for(int j=0;j<i;++j)
		szx[w[i]-w[j]]++;
	
	for(int i=0;i<=N;++i)
	  for(int j=0;j<i;++j){
		ans += szx[h[i]-h[j]];
	  }
	
	cout << ans << endl;
  }

  return 0;
}