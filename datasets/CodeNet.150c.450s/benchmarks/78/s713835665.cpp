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

const int MAX_N = 182;
int num[MAX_N];
VI odd;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  num[0] = 0;
  for(int i=1;i<MAX_N;++i){
	num[i] = i*(i+1)*(i+2)/6;
	if(num[i] % 2 == 1) odd.PB(num[i]); // i % 4 == 1
  }

  VI pr;
  REP(i,MAX_N) REP(j,MAX_N)
	pr.PB(num[i]+num[j]);
  SORT(pr);
  
  VI dp(1000000+1,123456789);
  dp[0] = 0;
  for(int i=1;i<1000000+1;++i){
	for(int j=0;j<SZ(odd);++j){
	  if(i < odd[j]) break;
	  dp[i] = min(dp[i], dp[i - odd[j]] + 1);
	}
  }

  int N;
  while(cin>>N,N){
	int cnt = 0;
	if(*lower_bound(num, num+MAX_N, N) == N) cnt=1;
	else if(*lower_bound(ALL(pr), N) == N) cnt=2;
	else{
	  REP(i,SZ(pr)){
		int x = N - pr[i];
		if(x < 0) break;
		if(*lower_bound(num, num+MAX_N, x) == x){
		  cnt=3; break;
		}
		if(*lower_bound(ALL(pr), x) == x){
		  cnt=4;
		}
	  }
	  if(!cnt) cnt = 5;
	}
	cout << cnt << " " << dp[N] << endl;
  }
  
  return 0;
}