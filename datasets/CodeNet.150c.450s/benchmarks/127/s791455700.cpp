#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
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

string Reverse(string &str){
	reverse(str.begin(),str.end());
	string res=str;
	reverse(str.begin(),str.end());
	return res;
}

void Solve(){
	int m;
	cin >> m;
	REP(i,0,m){
		string str;
		cin >> str;
		
		unordered_set<string> x;
		REP(i,0,str.size()-1){
			string a=str.substr(0,i+1),b=str.substr(i+1);
			x.insert(a+b);
			x.insert(b+a);
			x.insert(Reverse(a)+b);
			x.insert(b+Reverse(a));
			x.insert(a+Reverse(b));
			x.insert(Reverse(b)+a);
			x.insert(Reverse(a)+Reverse(b));
			x.insert(Reverse(b)+Reverse(a));
		}

		cout << x.size() << endl;
	}
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	Solve();
	return 0;
}