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
const double EPS = 1e-6;
const double PI  = acos(-1.0);
const long INF=pow(2,31)-1;
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))
 
const long MOD=1e9+7;
const int MAX_N=1004;
int dp[MAX_N][MAX_N];
int main(){
	string S1,S2;
	cin>>S1>>S2;
	CLR(dp);
	FOR(i,1,MAX_N){
		dp[0][i]=dp[i][0]=i;
	}
	REP(i,SZ(S1)){
		REP(j,SZ(S2)){
			int cost=(S1[i]==S2[j])?0:1;
			dp[i+1][j+1]=min(min(dp[i][j+1]+1,dp[i+1][j]+1),dp[i][j]+cost);
		}
	}
	cout<<dp[SZ(S1)][SZ(S2)]<<endl;
	return 0;
}