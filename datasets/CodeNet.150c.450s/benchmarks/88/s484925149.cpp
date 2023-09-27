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
typedef long long i64,ll;

#define BR "\n"
#define ALL(c) (c).begin(),(c).end()
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define FOR(i,l,r) for(int i=(l);i<(int)(r);++i)
#define EACH(it,o) for(auto it = (o).begin(); it != (o).end(); ++it)
#define IN(l,v,r) ((l)<=(v) && (v)<(r))

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

class Main{
public:
	
	bool comp(int h1,int w1,int h2,int w2){
		int d1=h1*h1+w1*w1;
		int d2=h2*h2+w2*w2;
		if(d1!=d2)return d1<d2;
		return h1<h2;
	}

	void run(){

		while(true){
			int h,w; cin >> h >> w;if(h==0 && w==0)return;


			int mh=-1,mw=-1;
			for(int h2=1;h2<=150;h2++)
			for(int w2=1;w2<=150;w2++)if(h2<w2){
				if(comp(h,w,h2,w2)){
					if(mh==-1){
						mh=h2;mw=w2;
					}else{
						if(comp(h2,w2,mh,mw)){
							mh=h2;mw=w2;
						}
					}
				}
			}
			cout <<mh <<" "<<mw <<endl;
		}
	}
};

 int main(){
	//ios::sync_with_stdio(false);
 	Main().run();
 	return 0;
 }