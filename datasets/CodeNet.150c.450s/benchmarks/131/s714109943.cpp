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
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

const long double EPS = 1e-12;
const int INF = 10000;

struct edge{
	int l,r,h;
	bool operator<( const edge& right ) const {
        return h == right.h ? r < right.r : h < right.h;
    }
};


int main(){
	int a,L;
	while(cin>>a>>L){
		if(a==0&&L==0)break;
		map<string,int>mp;
		int cnt=0;
		int res1,res2,res3;
		while(1){
			string tmp=toString(a);
			string str;
			REP(i,L-SZ(tmp))str+='0';
			str+=tmp;
			if(mp.find(str)!=mp.end()){
				res1=mp[str];
				res2=toInt(str);
				res3=cnt-mp[str];
				break;
			}
			mp.insert(MP(str,cnt));
			sort(ALL(str),greater<char>());
			string maxi=str;
			sort(ALL(str));
			string mini=str;
			a=toInt(maxi)-toInt(mini);
			cnt++;
		}
		cout<<res1<<" "<<res2<<" "<<res3<<endl;
	}
	return 0;
}