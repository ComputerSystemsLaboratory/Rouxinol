#define _USE_MATH_DEFINES

#include <iostream>
#include <algorithm> // min()
#include <string>
#include <vector>
#include <numeric>
#include <queue>
#include <stack>
#include <tuple>

#include <climits> // INT_MAX
#include <cmath> // ceil()
#include <cstring>

#define rep(i, n) for (int i = 0; i < n; ++i)
#define b2e(vec) vec.begin(), vec.end()

using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const int type_num = 26;


int dec_satis(vector<int> & c, vector<int> & last, int d) {
	int y = 0;
	rep(i, type_num) y += c[i] * (d + 1 - last[i]);
	return y;
}


int main() {
	int D;
	cin >> D;

	vector<int> c(type_num);
	rep(i, type_num) cin >> c[i];

	vector<vector<int>> s(D, vector<int>(type_num));
	rep(i, D) rep(j, type_num) cin >> s[i][j];

	vector<int> t(D);
	rep(i, D) {
		cin >> t[i];
		t[i]--;
	}
	vector<int> last(type_num);
	int satis = 0;

	rep(i, D){
		last[t[i]] = i + 1;
		satis += s[i][t[i]] - dec_satis(c, last, i);
		cout << satis << endl;
	}
}