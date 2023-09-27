#include <cmath>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>

using namespace std;

#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, (n))

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef long long ll;

const int INF = 1 << 29;
const double EPS = 1e-9;

vector<string> field;
int h, w;

void visit(int y, int x) {
	char c = field[y][x];
	field[y][x] = '.';
	if (y > 0 && field[y - 1][x] == c)
		visit(y - 1, x);
	if (x > 0 && field[y][x - 1] == c)
		visit(y, x - 1);
	if (y < h - 1 && field[y + 1][x] == c)
		visit(y + 1, x);
	if (x < w - 1 && field[y][x + 1] == c)
		visit(y, x + 1);
}

int main() {
	while (cin >> h >> w, (h | w)) {
		field.clear();
		REP(i, h) {
			string s;
			cin >> s;
			field.push_back(s);
		}
		int result = 0;
		REP(i, h) {
			REP(j, w) {
				if (field[i][j] != '.') {
					result++;
					visit(i, j);
				}
			}
		}
		cout << result << endl;
	}
}