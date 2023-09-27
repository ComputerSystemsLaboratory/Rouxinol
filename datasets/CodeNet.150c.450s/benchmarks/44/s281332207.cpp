#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <climits>
#include <utility>

#define PRINT(STR) cout << STR << endl;
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define SPACE " "

typedef long long ll;

using namespace std;

int nextInt() { int n = -1; cin >> n; return n; }
double nextDouble() { double d = -1; cin >> d; return d; }
ll nextll() { ll n = -1; cin >> n; return n; }
string nextString() { string str; cin >> str; return str; }

int INF = 1LL << 25;
double EPS = 1e-9;

// BEGIN //////////////////////////////////////////////////////////////

int main() {
	int as[4];
	int bs[4];
	while (scanf("%d%d%d%d", as, as+1, as+2, as+3) != EOF) {
		scanf("%d%d%d%d", bs, bs+1, bs+2, bs+3);
		int h = 0, b = 0;
		REP(i, 4) {
			if (as[i] == bs[i]) {
					h++;
			}	else {
				REP(j, 4) {
					if (i == j) continue;
					if (bs[i] == as[j]) {
						b++;
					}
				}
			}
		}
		cout << h << SPACE << b << endl;

	}
}

// END   //////////////////////////////////////////////////////////////