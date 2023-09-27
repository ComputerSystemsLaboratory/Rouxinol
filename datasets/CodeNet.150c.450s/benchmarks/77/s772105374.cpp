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
		vvi field(21, vi(21, 0));
		
		REP(i, N) {
			int x, y;
			cin >> x >> y;
			field[x][y] = 1;
		}

		int M;
		cin >> M;

		int pos_x = 10, pos_y = 10;

		REP(i, M) {
			char d;
			int l;
			cin >> d >> l;

			switch(d) {
			case 'N':
				REP(j, l) {
					++pos_y;
					field[pos_x][pos_y] = 0;
				}
				break;
			case 'E':
				REP(j, l) {
					++pos_x;
					field[pos_x][pos_y] = 0;
				}
				break;
			case 'W':
				REP(j, l) {
					--pos_x;
					field[pos_x][pos_y] = 0;
				}
				break;
			case 'S':
				REP(j, l) {
					--pos_y;
					field[pos_x][pos_y] = 0;
				}
				break;
			}
		}

		bool suc = true;

		REP(i, 21) {
			REP(j, 21) {
				if(field[i][j]) {
					suc = false;
				}
			}
		}

		if(suc) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}