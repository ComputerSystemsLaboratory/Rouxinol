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
typedef vector<int> vi; typedef pair<int,int> pii; typedef vector<pair<int,int> > vpii;
typedef long long ll; typedef vector<long long> vl; typedef pair<long long,long long> pll; typedef vector<pair<long long,long long> > vpll;
typedef vector<string> vs; typedef long double ld;

#define BR "\n"
#define ALL(c) (c).begin(),(c).end()
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define EACH(it,o) for(auto it = (o).begin(); it != (o).end(); ++it)
#define IN(l,v,r) ((l)<=(v) && (v)<(r))

//config
//#undef NDEBUG
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

template<typename T,typename V> inline T mod(T v,V MOD){
	return (v%MOD+MOD)%MOD;
}
int hmap[2005000],wmap[2005000];
		    
class Main{
public:

	void run(){
		while(true){
			int N,M;cin >> N >> M ;if(N==0 && M==0)break;
			vector<int> hs(N),ws(M);
			REP(i,N)cin >> hs[i];
			REP(i,M)cin >> ws[i];

			vector<int> hsum(N+1),wsum(M+1);
			for(int i=1;i<=N;i++)hsum[i]=hsum[i-1]+hs[i-1];
			for(int i=1;i<=M;i++)wsum[i]=wsum[i-1]+ws[i-1];


			fill_n(hmap,2005000,0);
			fill_n(wmap,2005000,0);

		    for(int i=0;i<=N;i++)for(int j=i+1;j<=N;j++){
		    	hmap[hsum[j]-hsum[i]]++;
		    }
		    for(int i=0;i<=M;i++)for(int j=i+1;j<=M;j++){
		    	wmap[wsum[j]-wsum[i]]++;
		    }
		  
		    ll res=0;
		    for(int i=1;i<2005000;i++){
		    	res+=(ll)hmap[i]*wmap[i];
		    }
		    cout << res <<endl;
		}
	}
};

 int main(){
ios::sync_with_stdio(false);
 	Main().run();
 	return 0;
 }