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
#include <complex>
#include <math.h>

using namespace std;

//conversion
//------------------------------------------
inline long toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
inline long toLong(string s) {long v; istringstream sin(s);sin>>v;return v;}
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
#define FOR(i,a,b) for(long i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

const long double EPS = 1e-12;
const int INF = 10000;

struct edge{int to,cost;};
typedef pair<int,int> P;//firstは最短距離,secondは頂点番号

int main(){
	int T;
	cin>>T;
	
	REP(t,T){
		int y,m,d;
		cin>>y>>m>>d;
		int sum=0;
		if(y%3!=0&&m%2==0){
			sum+=20-d;
			d=1;
			if(m==10){
				y++;m=1;
			}else{
				m++;
			}
		}else{
			sum+=21-d;
			if(m==10){
				y++;m=1;
			}else{
				m++;
			}
		}
		
		while(y<1000){
			while(m<=10){
				if(y%3!=0&&m%2==0){
					sum+=19;
				}else{
					sum+=20;
				}
				m++;
				
			}
			m=1;y++;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}