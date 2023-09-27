#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define all(v) v.begin(), v.end()
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int inf = 1000000000;
const int mod = 1000000007;
const double EPS = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int n;
string s;
string table[10] = {
	"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz",
};

int main() {
	// cin.tie(0); // tie
	// ios::sync_with_stdio(false); // sync
	cin >> n;
	rep(i, n) {
		cin >> s;
		int num = s[0] - '0', cnt = 0;
		REP(j, 1, s.size()) {
			if (s[j] != s[j - 1] || num == 0) {
				if (num != 0) cout << table[num][cnt];
				cnt = 0;
				num = s[j] - '0';
			} else {
				cnt = (cnt + 1) % table[num].size();
			}
		}
		cout << endl;
	}
	return 0;
}