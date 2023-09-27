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



bool mp[401][401];
int main(){
	int N;
	int dx[]={-1,0,1,0};
	int dy[]={0,1,0,-1};
	
	while(cin>>N){
		if(N==0)break;
		CLR(mp);
		vector<PII>pi;
		mp[200][200]=true;
		pi.PB(MP(200,200));
		REP(i,N-1){
			int n,d;
			cin>>n>>d;
			int x=pi[n].first,y=pi[n].second;
			x+=dx[d];y+=dy[d];
			mp[x][y]=true;
			//cout<<x<<" "<<y<<endl;
			pi.PB(MP(x,y));
			
		}
		int maxi=-1,mini=INF,maxj=-1,minj=INF;
		REP(i,401){
			REP(j,401){
				if(mp[i][j]){
					maxi=max(maxi,i);
					mini=min(mini,i);
					maxj=max(maxj,j);
					minj=min(minj,j);
				}
			}
		}
		cout<<(maxi-mini+1)<<" "<<(maxj-minj+1)<<endl;
	}
	return 0;
}