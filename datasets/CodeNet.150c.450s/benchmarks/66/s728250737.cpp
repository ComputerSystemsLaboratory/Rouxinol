#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n-1)
const double EPS = 1e-10;
const double PI = acos(-1.0);
 
int main() {
	int N, M;
	cin >> N;

	set<string> name;
	string tmp;
	REP(i, N) {
		cin >> tmp;
		name.insert(tmp);
	}

	int status = 0;
	cin >> M;
	REP(i, M) {
		cin >> tmp;
		if(EXIST(name, tmp)) {
			if(!(status%2)) {
				cout << "Opened by " << tmp << endl;
			} else {
				cout << "Closed by " << tmp << endl;
			}
			status++;
		} else {
			cout << "Unknown " << tmp << endl;
		}
	}
	
	return 0;
}