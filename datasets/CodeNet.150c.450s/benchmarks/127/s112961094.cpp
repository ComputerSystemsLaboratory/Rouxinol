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
	int m;
	cin >> m;

	REP(i, m) {
		string str;
		set<string> trains;

		cin >> str;

		int size = str.size();

		FOR(j, 1, size) {
			string str1, str2;

			str1 = str.substr(0, j);
			str2 = str.substr(j);

			string rstr1, rstr2;

			FOR(k, 0, str1.size()) {
				rstr1 += str1[str1.size()-k-1];
			}

			FOR(k, 0, str2.size()) {
				rstr2 += str2[str2.size()-k-1];
			}

			string train[8];

			train[0] = str1 + str2;
			train[1] = str1 + rstr2;
			train[2] = rstr1 + str2;
			train[3] = rstr1 + rstr2;
			
			train[4] = str2 + str1;
			train[5] = str2 + rstr1;
			train[6] = rstr2 + str1;
			train[7] = rstr2 + rstr1;

			FOR(k, 0, 8) {
				trains.insert(train[k]);
			}
		}
		
		cout << trains.size() << endl;
	}
}