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
	int N;

	while(cin >> N, N) {
		vvi pieces(N+1, vi(2, 0));
		pieces[0][0] = 0;
		pieces[0][1] = 0;
		int min_x = 0, max_x = 0;
		int min_y = 0, max_y = 0;

		FOR(i, 1, N) {
			int n, d;
			cin >> n >> d;

			switch(d) {
			case 0:
				pieces[i][0] = pieces[n][0]-1;
				pieces[i][1] = pieces[n][1];
				break;
			case 1:
				pieces[i][0] = pieces[n][0];
				pieces[i][1] = pieces[n][1]-1;
				break;
			case 2:
				pieces[i][0] = pieces[n][0]+1;
				pieces[i][1] = pieces[n][1];
				break;
			case 3:
				pieces[i][0] = pieces[n][0];
				pieces[i][1] = pieces[n][1]+1;
				break;
			}

			if(min_x > pieces[i][0]) {
				min_x = pieces[i][0];
			}
			if(max_x < pieces[i][0]) {
				max_x = pieces[i][0];
			}
			if(min_y > pieces[i][1]) {
				min_y = pieces[i][1];
			}
			if(max_y < pieces[i][1]) {
				max_y = pieces[i][1];
			}
		}

		cout << max_x-min_x+1 << " " << max_y-min_y+1 << endl;
	}
}