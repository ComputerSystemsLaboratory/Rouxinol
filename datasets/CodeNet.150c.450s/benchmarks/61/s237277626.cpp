#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

int main(void)
{
	int N, A, B, C, X;
	while (cin >> N >> A >> B >> C >> X, N|A|B|C|X) {
		vector<int> yn = vector<int>(N);
		rep(i, N) cin >> yn[i];

		int turn = 0;
		int idx = 0;
		rep(i, 10001) {
			if (X == yn[idx]) {
				idx++;
				if (idx == N)
					break;
			}
			X = (A*X+B)%C;
			turn++;
		}
		cout << (turn==10001?-1:turn) << endl;
	}
	return 0;
}