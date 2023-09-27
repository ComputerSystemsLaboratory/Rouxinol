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
	int N,W;
	cin>>N>>W;
	vector<int>w,v;
	vector<vector<int> >dp;
	dp.assign(N+2,vector<int>(W+2,0));
	v.PB(0);w.PB(0);
	REP(i,N){
		int vt,wt;
		cin>>vt>>wt;
		v.PB(vt);w.PB(wt);
	}
	int res=0;
	FOR(i,1,N+1){
		REP(wt,W+1){
			if(wt>=w[i]){
				if(v[i]+dp[i-1][wt-w[i]]>dp[i-1][wt]){
					dp[i][wt]=v[i]+dp[i-1][wt-w[i]];
				}else{
					dp[i][wt]=dp[i-1][wt];
				}
			}else{
				dp[i][wt]=dp[i-1][wt];
			}
		}
	}

	cout<<dp[N][W]<<endl;
	return 0;
}