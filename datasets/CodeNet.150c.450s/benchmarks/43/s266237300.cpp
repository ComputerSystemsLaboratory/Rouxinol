#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>
#include <utility>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl
#define ROUNDED(N) fixed << setprecision(N)
#define SPACE " "

typedef long long ll;
using namespace std;

int nextInt() { int n; cin >> n; return n; }
double nextDouble() { double d; cin >> d; return d; }
string nextString() { string str; cin >> str; return str; }

int main() {
	cin.tie(0); //対話型には使えない
	ios::sync_with_stdio(false); //printfと共には使えない
	while (true) {
		int n = nextInt();
		if (!n) break;
		int a_sum = 0, b_sum = 0;
		for (int i = 0; i < n; i++) {
			int a = nextInt(), b = nextInt();
			if (a > b) a_sum += a + b;
			else if (a == b) a_sum += a, b_sum += b;
			else b_sum += a + b;
		}
		cout << a_sum << SPACE << b_sum << endl;
	}
	return 0;
}