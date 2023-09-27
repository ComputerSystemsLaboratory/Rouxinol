#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>

using namespace std;

#define ALL(c) c.begin(),c.end()
#define RALL(c) c.rbegin(),c.rend()
#define SORT(x) sort((x).begin(),(x).end())
#define REP(i,x,y) for(int i=(x);i<(y);++i)
#define MP(a,b) make_pair((a),(b))
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define dump(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define dump(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
//template<typename T> using vec=std::vector<T>;

const int INF=1<<30;
const long long int INF_=1LL<<58;
const double EPS=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
	os << "[";
	for (const auto &v : vec) {
		os << v << ",";
	}
	os << "]";
	return os;
}

void Solve(){
	while(true){
		int n,m,h[1500],w[1500];
		cin >> n >> m;
		if(n==0&&m==0) break;
		REP(i,0,n) cin >> h[i];
		REP(i,0,m) cin >> w[i];
	
		int sumh[1500],sumw[1500];
		sumh[0]=h[0]; sumw[0]=w[0];
		REP(i,1,n) sumh[i]=sumh[i-1]+h[i];
		REP(i,1,m) sumw[i]=sumw[i-1]+w[i];
		
		unordered_map<int,int> cnth,cntw;
		REP(i,0,n){
			REP(j,i,n){
				if(i==0) ++cnth[sumh[j]];
				else ++cnth[sumh[j]-sumh[i-1]];
			}
		}
	
		REP(i,0,m){
			REP(j,i,m){
				if(i==0) ++cntw[sumw[j]];
				else ++cntw[sumw[j]-sumw[i-1]];
			}
		}
	
		int ans=0;
		for(auto it=cnth.begin(); it!=cnth.end(); ++it){
			if(cntw.count(it->first)==0) continue;
			ans+=it->second*cntw[it->first];
		}
	
		cout << ans << endl;
	}
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	Solve();
	return 0;
}