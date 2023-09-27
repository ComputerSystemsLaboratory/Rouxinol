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
const long INF=LONG_MAX;
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

long dp[100003];
int main(){
	int N;cin>>N;
	vector<long>a(N);
	fill(dp,dp+N,INF);//?????????i??§??????????????????????¢??????¨?????????????°????????°?
	REP(i,N)cin>>a[i];
	REP(i,N){
		*lower_bound(dp,dp+N,a[i])=a[i];
	}
	cout<<lower_bound(dp,dp+N,INF)-dp<<endl;
	return 0;
}