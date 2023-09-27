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

char mp[52][52];

int dx[]={1,0,-1,0,-1,1,1,-1};
int dy[]={0,1,0,-1,-1,-1,1,1};
bool flag[52][52];

bool bfs(int s,int t){
	if(flag[s][t])return false;
	int sum=0;
	queue<PII>pi;
	pi.push(MP(s,t));
	flag[s][t]=true;
	while(!pi.empty()){
		PII p=pi.front();pi.pop();
		sum++;
		REP(i,8){
			int y=p.first+dy[i],x=p.second+dx[i];
			if(mp[y][x]=='1'&&!flag[y][x]){
				flag[y][x]=true;
				pi.push(MP(y,x));
			}
		}
	}
	return true;
}
int main(){
	int W,H;
	while(cin>>W>>H){
		if(W==0&&H==0)break;
		REP(i,52)REP(j,52){
			mp[i][j]='0';
		}
		CLR(flag);
		int y,x;
		REP(i,H)REP(j,W){
			cin>>mp[i+1][j+1];
		}
		int sum=0;
		REP(i,H)REP(j,W){
			if(mp[i+1][j+1]=='1'&&bfs(i+1,j+1))sum++;
		}
		//cout<<"!"<<y<<" "<<x<<endl;
		cout<<sum<<endl;
	}
	return 0;
}