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
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str(); }
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = INT_MAX / 10;

void show_field(vvi field, int H) {
	REP(i, H) {
		REP(j, 5) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}

vvi fall(vvi field, int H) {
	vvi new_field(H, vi(5));
	REP(j, 5) {
		int pos = H - 1;
		for (int i = H - 1; i >= 0; i--) {
			if (field[i][j] > 0) {
				new_field[pos][j] = field[i][j];
				pos--;
			}
		}
	}
	return new_field;
}

int main() {
	int H;
	while (cin >> H, H) {
		vvi field(H, vi(5));
		REP(i, H) {
			REP(j, 5) {
				cin >> field[i][j];
			}
		}

		int score = 0;
		bool updated = true;
		while (updated) {
			updated = false;
			REP(i, H) {
				REP(j, 3) {
					int num = field[i][j];
					if (num != 0) {
						int succ = 0;
						while (j + succ != 5 && num == field[i][j + succ]) {
							succ++;
						}
						if (succ >= 3) {
							score += num*succ;
							REP(k, succ) {
								field[i][j + k] = 0;
							}
							updated = true;
						}
					}
				}
			}
			field = fall(field, H);
		}

		cout << score << endl;
	}

	return 0;
}