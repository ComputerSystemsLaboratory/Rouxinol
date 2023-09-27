//include
//------------------------------------------
#include <bits/stdc++.h>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
inline long long toLL(string s) {long long v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
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
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(long i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

const double EPS = 1e-12;
const long INF = 1000001;
const LL MOD=100007;

long dp1[1000003],dp2[1000003];
int main(){
	LL t=1;
	vector<LL>poll,odd;
	LL n=1;
	while(t<=1000000){
		t=n*(n+1)*(n+2)/6LL;
		poll.PB(t);
		if(t%2)odd.PB(t);
		n++;
	}
	REP(i,1000002){
		dp1[i]=dp2[i]=INF;
	}
	dp1[0]=dp2[0]=0;
	dp1[1]=dp2[1]=1;
	FOR(i,2,1000001){
		auto itr1=upper_bound(ALL(poll),i);
		auto itr2=upper_bound(ALL(odd),i);
		//itr1--;itr2--;
		for(auto itr=poll.begin();itr!=itr1;itr++)dp1[i]=min(dp1[i],dp1[i-*itr]+1);
		for(auto itr=odd.begin();itr!=itr2;itr++)dp2[i]=min(dp2[i],dp2[i-*itr]+1);
	}
	long tt;
	while(cin>>tt&&tt!=0){
		cout<<dp1[tt]<<" "<<dp2[tt]<<endl;
	}
	return 0;
}