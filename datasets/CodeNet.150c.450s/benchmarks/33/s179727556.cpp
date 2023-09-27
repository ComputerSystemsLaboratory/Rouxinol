#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <map>
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

int Compute(int p,int x){
	return p*(100+x)/100;
}

void Solve(){
	int x,y,s;
	while(true){
		cin >> x >> y >> s;
		if(x==0&&y==0&&s==0) break;

		int ans=0;
		REP(i,1,s){
			REP(j,1,s){
				int a=i,b=s-j;
				if(Compute(a,x)+Compute(b,x)==s) ans=max(ans,Compute(a,y)+Compute(b,y));
			}
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