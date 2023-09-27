#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
#include <fstream>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

int main() {
	int a0, L;
	while(cin >> a0 >> L, a0|L) {
		string a = toStr(a0);
		FOR(i, a.size(), L-1) {
			a.push_back('0');
		}

		int step = 1;
		vi num;
		num.push_back(a0);

		while(true) {
			sort(RALL(a));
			string smax = a;
			sort(ALL(a));
			string smin = a;
			int tmp = toInt(smax)-toInt(smin);

			REP(i, step) {
				if(num[i] == tmp) {
					cout << i << " " << num[i] << " " << step-i << endl;
					goto next;
				}
			}

			num.push_back(tmp);

			a = toStr(tmp);
			FOR(i, a.size(), L-1) {
				a.push_back('0');
			}
			step++;
		}

		next:;
	}

	return 0;
}