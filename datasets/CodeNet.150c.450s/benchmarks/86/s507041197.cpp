//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//typedef
//------------------------------------------
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef vector<string> vstring;
typedef pair<int, int> pint;
typedef pair<pint, int> ppint;
typedef pair<int, pint> pintp;
typedef unsigned int uint;
typedef long long llint;
typedef unsigned long long int ullint;

//container util
//------------------------------------------
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define mp make_pair
#define EXIST(v,i) (find((v).begin(), (v).end(), i) != (v).end())
#define ERASE(v,i) (v).erase(remove((v).begin(),(v).end(),i),(v).end())
#define me (*this)

//repetition
//------------------------------------------
#define rep(i,s) for(int i=0; i<(int)(s); i++)

//constant
//--------------------------------------------
const int INF = 100000000;
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLEAR(a) memset((a), 0 ,sizeof(a))

//debug
#define debug(x)  cerr << #x << " = " << (x) << endl

int main() {
	while(1) {
		static int n, m, p;
		cin >> n >> m >> p;
		if(!n && !m && !p)
			break;
		float rate = 1.0 - (float)p / 100;
		vint data;
		rep(i,n) {
			static int t;
			cin >> t;
			data.pb(t);
		}
		int sum = accumulate(all(data), 0) * 100;
		int pay = data.at(m - 1) != 0 ? sum * rate / data.at(m - 1): 0;
		cout << pay << endl;
	}
	return 0;
}