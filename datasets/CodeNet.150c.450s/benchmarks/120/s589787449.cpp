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
#include <cassert>
using namespace std;

//common
typedef int  i32;
typedef long long i64,ll;
#define BR "\n"

#define ALL(c) (c).begin(),(c).end()
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define EACH(it,o) for(auto it = (o).begin(); it != (o).end(); ++it)
#define IN(l,v,r) ((l)<=(v) && (v)<(r))

typedef vector<int> vi; typedef pair<int,int> pii; typedef vector<pair<int,int> > vpii;
typedef long long ll; typedef vector<long long> vl; typedef pair<long long,long long> pll; typedef vector<pair<long long,long long> > vpll;
typedef vector<string> vs; typedef long double ld;

//config
#define MODE_DEBUG
//#define INF 1<<30
//#define EPS 1e-8
//const ll MOD =100000007;

//debug
#ifdef MODE_DEBUG
#define LINE()    cerr<< " (L" << __LINE__ << ")"
#define LINELN()    LINE()<<endl

#define  DUMP(x)  cerr << #x << " = " << (x) <<endl
#define DEBUG(x) DUMP(x) << " (L" << __LINE__ << ")" << " " << __FILE__<<endl
#define CHECK(exp,act)  if(exp!=act){DUMP(exp);DEBUG(act);}
#define STOP(e)  CHECK(e,true);if(!(e)) exit(1);
#else
#define DUMP(x)
#define DEBUG(x)
#define CHECK(exp,act)
#define STOP(e)
#endif

template<class T> inline string toString(const vector<T>& x) {
	stringstream ss;
	REP(i,x.size()){
		if(i!=0)ss<<" ";
		ss<< x[i];
	}
	return ss.str();
}
template<class T> inline string toString(const vector<vector<T>>& map) {
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

template<typename T,typename V> inline T mod(T v,V MOD){
	return (v%MOD+MOD)%MOD;
}

const int INF=1<<28;
int main(){
	while(true){
		int H,W;cin >> H >> W;
		if(H==0 && W==0)break;
		vector<vector<int> > map(H,vector<int>(W));
		REP(y,H)REP(x,W)cin >>map[y][x];
		int mv=0;
		REP(bit,1<<H){
			int sum=0;
			REP(x,W){
				int sumH=0;
				REP(y,H)
					sumH+=map[y][x]^((bit>>y)&1);
				
				sum+=max(sumH,H-sumH);
			}
			mv=max(sum,mv);
		}
		cout << mv<<endl;
	}

	return 0;
}