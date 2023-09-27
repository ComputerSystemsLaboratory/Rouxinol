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
#define F_ first
#define S_ second
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define dump(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define dump(x)
#endif

typedef long long int lli;
typedef pair<int,int> pii;

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

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int N;
	while(true){
		cin >> N;
		if(!N) break;
		int ans=0;
		REP(i,1,N){
			int s=i;
			REP(j,i+1,N){
				s+=j;
				if(s==N){
					++ans;
					break;
				}else if(s>N) break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}