//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <fstream>
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

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

#define INF 100000000000000
#define MAX_V 101


int V;
LL d[MAX_V][MAX_V];

void wf(){
	REP(k,V)REP(i,V)REP(j,V){
		d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	}
}

int main(){
	int E;
	cin>>V>>E;
	REP(i,V)REP(j,V)d[i][j]=(i==j)?0:INF;
	REP(i,E){
		int a,b,c;
		cin>>a>>b>>c;
		d[a][b]=c;
	}
	wf();
	REP(i,V)if(d[i][i]<0){
		cout<<"NEGATIVE CYCLE"<<endl;
		return 0;
	}
	REP(i,V){
		REP(j,V){
			if(d[i][j]>2*10e9)cout<<"INF";
			else cout<<d[i][j];
			if(j!=V-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}