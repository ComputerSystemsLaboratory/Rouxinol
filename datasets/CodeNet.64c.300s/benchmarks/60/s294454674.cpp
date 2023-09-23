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

int mp[18][18];
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		CLR(mp);
		int n;
		cin>>n;
		REP(i,n){
			int x,y;
			cin>>x>>y;
			mp[x][y]=-1;
		}
		mp[1][1]=(mp[1][1]==-1)?-1:1;
		FOR(i,0,b+1)FOR(j,0,a+1){
			if(mp[j+1][i+1]!=-1){
				mp[j+1][i+1]+=((mp[j+1][i]==-1)?0:mp[j+1][i])+((mp[j][i+1]==-1)?0:mp[j][i+1]);
			}
		}
		if(mp[a][b]!=-1)cout<<mp[a][b]<<endl;
		else cout<<"0"<<endl;
	}
	
	return 0;
}