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
#define REP(i,n) FOR(i,0,n)

//constant
//--------------------------------------------

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

const long double EPS = 1e-8;
const long double INF = 1e20;

int main(){
	int H;
	while(cin>>H&&H){
		int ar[22][6];CLR(ar);
		bool f[22][5];
		REP(i,H)REP(j,5)cin>>ar[H-i-1][j];//0が一番下
		bool flag=true;
		int res=0;
		while(flag){
			CLR(f);
			flag=false;
			
			REP(i,H){
				int np=ar[i][0];
				int cnt=1;
				FOR(j,1,6){
					if(ar[i][j]==np)cnt++;
					else{
						if(cnt>=3&&np!=0){
							REP(k,cnt)f[i][j-k-1]=true;
							res+=np*cnt;
							flag=true;
						}
						cnt=1;np=ar[i][j];
					}
				}
			}
			REP(i,5){
				int gp=0;
				vector<int>tmp;
				REP(j,H)if(!f[j][i])tmp.PB(ar[j][i]);
				REP(j,SZ(tmp))ar[j][i]=tmp[j];
				FOR(j,SZ(tmp),H)ar[j][i]=0;
				//cout<<"!"<<endl;
			}
			/*REP(i,H){
				REP(j,5)cout<<ar[H-i-1][j];
				cout<<endl;
			}
			cout<<res<<endl;*/
		}
		cout<<res<<endl;
	}
	return 0;
}