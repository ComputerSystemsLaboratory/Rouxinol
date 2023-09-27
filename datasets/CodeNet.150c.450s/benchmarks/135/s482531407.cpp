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
const long INF = 100000001;
const LL MOD=100007;

long sumh[1503],sumw[1503];
int main(){
	int N,M;
	CLR(sumh);CLR(sumw);
	while(cin>>N>>M&&N!=0&&M!=0){
		long res=0;
		//CLR(sumh);CLR(sumw);
		REP(i,N){
			int h;
			cin>>h;
			sumh[i+1]=h+sumh[i];
		}
		REP(i,M){
			int w;
			cin>>w;
			sumw[i+1]=w+sumw[i];
		}
		vector<long>wbs;
		REP(i,M)FOR(j,i+1,M+1)wbs.PB(sumw[j]-sumw[i]);
		wbs.PB(INF);
		SORT(wbs);
		REP(i,N)FOR(j,i+1,N+1){
			res+=upper_bound(ALL(wbs),sumh[j]-sumh[i])-lower_bound(ALL(wbs),sumh[j]-sumh[i]);
		}
		cout<<res<<endl;
	}
	
	return 0;
}