#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <iostream>
#include <functional>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <cmath>
#include <limits>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>

using namespace std;
typedef long long ll;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define all(c) c.begin(),c.end()

class solver {
public:
	int D;
	vector<int> c;
	vector<vector<int>> s;

	void init() {
		cin >> D;
		c.resize(26);
		s.resize(D);
		rep(i, 26) {
			cin >> c[i];
		}
		rep(j, D) {
			s[j].resize(26);
			rep(i, 26) {
				cin >> s[j][i];
			}
		}
	}

	vector<int> calc(const vector<int>& t) const {
		vector<int> last(26);
		auto down = [&last, this](int d) {
			d++;
			int v = 0;
			rep(i, 26) {
				v += c[i] * (d - last[i]);
			}
			return v;
		};
		int N = t.size();
		vector<int> v(N);
		rep(i, N) {
			if (i > 0)
				v[i] = v[i - 1];
			v[i] += s[i][t[i]];
			last[t[i]] = i + 1;
			v[i] -= down(i);
		}
		return v;
	}
};

int main()
{
	solver solver;
	solver.init();
	vector<int> t(solver.D);
	rep(i, solver.D) {
		cin >> t[i];
		t[i]--;
	}
	auto ans = solver.calc(t);
	for (auto v : ans) {
		cout << v << endl;
	}
	return 0;
}
