#include <bits/stdc++.h>
 
using namespace std;
 
//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
 
//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}
 
//typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef pair<long, long> PLL;
typedef long long LL;
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())
 
//repetition
//------------------------------------------
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
 
//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int INF=INT_MAX;
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))



int main(){
	int n,m;
	cin>>n>>m;
	vector<int>c(m);
	vector<int>dp(n+1,INT_MAX);
	REP(i,m)cin>>c[i];
	SORT(c);
	dp[0]=0;
	REP(cost,n+1){
		REP(j,m)if(cost+c[j]<=n){
			dp[cost+c[j]]=min(dp[cost+c[j]],dp[cost]+1);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}