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

#define INF 10000000
#define MAX_V 1001
#define MAX_E 2001


struct edge{
	long from,to,cost;
};
edge es[MAX_E];
long d[MAX_V];
int V,E;

int belman(int s){
	fill(d,d+V,INF);
	d[s]=0;
	int cnt=0;
	while(1){
		bool update=false;
		REP(i,E){
			edge e=es[i];
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				update=true;
			}
		}
		if(!update)break;
		if(cnt==V-1)return 1;
		cnt++;
	}
	return 0;
}

int main(){
	int r;
	cin>>V>>E>>r;
	REP(i,E)cin>>es[i].from>>es[i].to>>es[i].cost;
	
	if(belman(r)){
		cout<<"NEGATIVE CYCLE"<<endl;
		return 0;
	}
	REP(i,V){
		if(d[i]<INF)cout<<d[i]<<endl;
		else cout<<"INF"<<endl;
	}
	return 0;
}