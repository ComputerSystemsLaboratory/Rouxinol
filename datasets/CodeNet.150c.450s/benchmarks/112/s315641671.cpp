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
	int n;

	while(cin >> n, n) {
		vector<vector<char> > table(n, vector<char>(2));

		REP(i, n) {
			char before, after;
			cin >> before >> after;
			
			table[i][0] = before;
			table[i][1] = after;
		}

		int m;
		cin >> m;
		string str;

		REP(i, m) {
			char c;
			cin >> c;

			REP(j, n) {
				if(c == table[j][0]) {
					c = table[j][1];
					break;
				}
			}

			str.push_back(c);
		}

		cout << str << endl; 
	}
}