#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <utility>
#include <numeric>
#include <algorithm>
#include <functional>
#include <cctype>
#include <complex>
#include <string>
#include <sstream>
#include <fstream>
#include <cassert>
using namespace std;

//common

typedef int  i32;
typedef long long i64,ll;
typedef long double ld;

#define BR "\n"
#define ALL(c) (c).begin(),(c).end()
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define FOR(i,l,r) for(int i=(int)l;i<(int)(r);++i)
#define EACH(it,o) for(auto it = (o).begin(); it != (o).end(); ++it)
#define IN(l,v,r) ((l)<=(v) && (v)<(r))

//config
//#define NDEBUG
//#define INF 1<<30
//#define EPS 1e-8
//const ll MOD =100000007;

//debug
#ifdef NDEBUG
#define DUMP(x)
#define DUMPLN(x)
#define DEBUG(x)
#define DEBUGLN(x)
#define LINE()
#define LINELN()
#define CHECK(exp,act)
#define STOP(e)
#else
#define DUMP(x)  cerr << #x << " = " << (x)
#define DUMPLN(x)  DUMP(x) <<endl
#define DEBUG(x) DUMP(x) << LINE() << " " << __FILE__
#define DEBUGLN(x) DEBUG(x)<<endl
#define LINE()    cerr<< " (L" << __LINE__ << ")"
#define LINELN()    LINE()<<endl
#define CHECK(exp,act)  if(exp!=act){DUMPLN(exp);DEBUGLN(act);}
#define STOP(e)  CHECK(e,true);if(!(e)) exit(1);
#endif

template<class T> inline string toString(const vector<T>& x) {
	stringstream ss;
	REP(i,x.size()){
		if(i!=0)ss<<" ";
		ss<< x[i];
	}
	return ss.str();
}

template<class T> inline string toString(const vector<vector<T> >& map) {
	stringstream ss;
	REP(i,map.size()){
		if(i!=0)ss<<BR;
		ss<< toString(map[i]);
	}
	return ss.str();
}
template<class K,class V>  string toString(map<K,V>& x) {
	string res;stringstream ss;
	for(auto& p:x)ss<< p.first<<":" << p.second<<" ";
	return ss.str();
}

string BITtoString(int bit){
    stringstream ss;
    while(bit!=0){ss<<(bit%2);bit/=2;}
    string res=ss.str();reverse(ALL(res));
    return res;
}

template<typename T,typename V> inline T pmod(T v,V MOD){
	return (v%MOD+MOD)%MOD;
}
#define nextInt(n) scanf("%d",&n)
#define defInt(n) int n;nextInt(n)
#define nextLong(n) scanf("%lld",&n)
#define defLong(n) ll n;nextLong(n)
#define nextDouble(n) scanf("%lf",&n)


int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

class Main{
	public:

	int N;
	void run(){
		// ifstream cin("D2");
//		ofstream cout( "D2.out" );
		
		while(true){
			int W,H;cin >> W >> H;if(W==0 && H ==0)break;
			vector<string> board(H);
			REP(y,H)cin >> board[y];

			vector<vector<bool>> passed(H,vector<bool>(W));
			queue<pair<int,int>> que;
			REP(y,H)REP(x,W){
				if(board[y][x]=='@'){
					que.push(make_pair(y,x));
				}
			}

			int res=0;
			while(!que.empty()){
				pair<int,int> pos=que.front();que.pop();
				if(passed[pos.first][pos.second])continue;
				passed[pos.first][pos.second]=true;
				res++;

				REP(d,4){
					int ny=pos.first+dy[d],nx=pos.second+dx[d];
					if(IN(0,ny,H) && IN(0,nx,W)){
						if(board[ny][nx]=='.'){
							que.push(make_pair(ny,nx));							
						}
					}
				}
			}

			cout << res <<endl;
		}
	}


};
int main(){
	cout <<fixed<<setprecision(15);	
	ios::sync_with_stdio(false);
	Main().run();
	return 0;
}