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
	const int months[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const string answers[7] =
	{ "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };
	while (true) {
		int M = nextInt();
		int D = nextInt();
		if (M == 0) break;
		int past_days = -1;
		for (int i = 1; i < M; i++) {
			past_days += months[i];
		}
		past_days += D;
		PRINT(answers[past_days % 7]);
	}
	return 0;
}
// END   //////////////////////////////////////////////////////////////