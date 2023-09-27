#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define rrep(i,n) for(int i=1;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define maxs(a, b) a = max(a, b)
#define mins(a, b) a = min(a, b)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll linf = (1ll << 61);
const int inf = 1001001001;
const int mod = 1000000007;

int D;
#define KIND 26
vector<int> c(KIND);
vector<vector<int>> s(365, vector<int>(KIND));
vector<int> t(365);

vector<int> last(KIND, -1);
int calc_score() {
	int ret_score = 0;
	for (int i = 0; i < D; ++i) {
		ret_score += s[i][t[i] - 1];
		last[t[i] - 1] = i;
		int dec_score = 0;
		for (int j = 0; j < KIND; ++j) {
			dec_score += c[j] * (i - last[j]);
		}
		ret_score -= dec_score;
		cout << ret_score << endl;
	}
	return ret_score;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> D;
	for (auto& elem : c) cin >> elem;
	for (int i = 0; i < D; ++i) {
		for (int j = 0; j < KIND; ++j) {
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < D; ++i) cin >> t[i];

	calc_score();

	return 0;
}