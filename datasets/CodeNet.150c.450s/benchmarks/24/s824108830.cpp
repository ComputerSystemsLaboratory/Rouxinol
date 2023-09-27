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
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;

int main() {
	int n, m;

	while(cin >> n >> m, n) {
		vvi route(n, vi(2, 0));

		REP(i, n) {
			cin >> route[i][1] >> route[i][0];
		}

		sort(RALL(route));
	
		REP(i, n) {
decrease:
			if(m > 0) {
				--route[i][1];
				--m;
				if(route[i][1] == 0) {
					continue;
				} else {
					goto decrease;
				}
			} else {
				break;
			}
		}

		int p = 0;

		REP(i, n) {
			p += route[i][0]*route[i][1];
		}

		cout << p << endl;
	}
}